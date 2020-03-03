#ifndef _AVL__HPP_
#define _AVL__HPP_

#include <iostream>
using namespace std;

template <typename T>
class AVLTreeNode
{
public:
    AVLTreeNode(T value, AVLTreeNode<T>*l, AVLTreeNode<T>*r)
        :key(value), lchild(l), rchild(r){}
    T key;
    int height;
    AVLTreeNode<T>* lchild;
    AVLTreeNode<T>* rchild;
};

template <typename T>
class AVLTree
{
public:
    AVLTree();
    ~AVLTree();
    int max(int a, int b);
    AVLTreeNode<T>* maximum(AVLTreeNode<T>* pnode)const;
    T maximum();
    AVLTreeNode<T>* minimum(AVLTreeNode<T>* pnode)const;
    T minimum();
    int height(AVLTreeNode<T>* pnode);
    int height();
    AVLTreeNode<T>* leftRotation(AVLTreeNode<T>* proot);
    AVLTreeNode<T>* rightRotation(AVLTreeNode<T>*proot);
    AVLTreeNode<T>* leftRightRotation(AVLTreeNode<T>* proot);
    AVLTreeNode<T>* rightLeftRotation(AVLTreeNode<T>* proot);
    AVLTreeNode<T>* insert(AVLTreeNode<T>* &pnode, T key);
    void insert(T key);
    AVLTreeNode<T>* search_recurse(T key);
    AVLTreeNode<T>* search_recurse(AVLTreeNode<T>* pnode, T key) const;
    void destory();
    void destory(AVLTreeNode<T>* & pnode);
    void postOrder();
    void postOrder(AVLTreeNode<T>* pnode) const;
    void preOrder();
    void preOrder(AVLTreeNode<T>* pnode) const;
    void InOrder();
    void inOrder(AVLTreeNode<T>* pnode) const;
    void remove(T key);
    AVLTreeNode<T>* remove(AVLTreeNode<T>* & pnode, T key);
    AVLTreeNode<T>* search_iterator(AVLTreeNode<T>* pnode, T key) const;

    AVLTreeNode<T>* search_iterator(T key);

private:
    AVLTreeNode<T> * root;
};

/*���캯��*/
template <typename T>
AVLTree<T>::AVLTree()
    :root(nullptr){}

/*��������*/
template <typename T>
AVLTree<T>::~AVLTree()
{
    destory(root);
}

/*���������еĽϴ���*/
template<typename T>
int AVLTree<T>::max(int a, int b)
{
    return a > b ? a : b;
};

/*�����������ڵ�ֵ*/
template <typename T>
AVLTreeNode<T>* AVLTree<T>::maximum(AVLTreeNode<T>* pnode)const
{
    if (pnode != nullptr)
    {
        while (pnode->rchild != nullptr)
            pnode = pnode->rchild;
        return pnode;
    }
    return nullptr;
};

template<typename T>
T AVLTree<T>::maximum()
{
    AVLTreeNode<T>* presult = maximum(root);
    if (presult != nullptr)
        return presult->key;
};

/*����������С�ڵ�ֵ*/
template <typename T>
AVLTreeNode<T>* AVLTree<T>::minimum(AVLTreeNode<T>* pnode)const
{
    if (pnode != nullptr)
    {
        while (pnode->lchild != nullptr)
            pnode = pnode->lchild;
        return pnode;
    }
    return nullptr;
};

template<typename T>
T AVLTree<T>::minimum()
{
    AVLTreeNode<T>* presult = minimum(root);
    if (presult != nullptr)
        return presult->key;
};

/*����һ�����ĸ߶�*/
template <typename T>
int AVLTree<T>::height(AVLTreeNode<T>* pnode)
{
    if (pnode != nullptr)
    {
        return pnode->height;
    }
    return 0;    //����ǿ����� �߶�Ϊ 0
};

template <typename T>
int AVLTree<T>::height()
{
    return height(root);
};

/*����ת����*/
/*pnode Ϊ��Сʧ�������ĸ��ڵ�*/
/*������ת��ĸ��ڵ�*/
template<typename T>
AVLTreeNode<T>* AVLTree<T>::leftRotation(AVLTreeNode<T>* proot)
{
    AVLTreeNode<T>* prchild = proot->rchild;
    proot->rchild = prchild->lchild;
    prchild->lchild = proot;
    proot->height = max(height(proot->lchild),height(proot->rchild))+1;
    //���½ڵ�ĸ߶�ֵ
    prchild->height = max(height(prchild->lchild),
                          height(prchild->rchild)) + 1;
    //���½ڵ�ĸ߶�ֵ

    return prchild;
};

/*����ת����*/
/*pnode Ϊ��Сʧ�������ĸ��ڵ�*/
/*������ת��ĸ��ڵ�*/
template <typename T>
AVLTreeNode<T>* AVLTree<T>::rightRotation(AVLTreeNode<T>*proot)
{
    AVLTreeNode<T>* plchild = proot->lchild;
    proot->lchild = plchild->rchild;
    plchild->rchild = proot;
    proot->height =
            max(height(proot->lchild), height(proot->rchild)) + 1; /*���½ڵ�
    �ĸ߶�ֵ*/
    plchild->height =
            max(height(plchild->lchild), height(plchild->rchild)) + 1; /*����
    �ڵ�ĸ߶�ֵ*/

    return plchild;
};

/*�����������ת*/
/*���� proot Ϊ��Сʧ�������ĸ��ڵ�*/
/*������ת��ĸ��ڵ�*/
template <typename T>
AVLTreeNode<T>* AVLTree<T>::leftRightRotation(AVLTreeNode<T>* proot)
{
    proot->lchild= leftRotation(proot->lchild);
    return rightRotation(proot);
};

/*������������*/
/*���� proot Ϊ��Сʧ�������ĸ��ڵ�*/
/*������ת��ĸ��ڵ�*/
template<typename T>
AVLTreeNode<T>* AVLTree<T>::rightLeftRotation(AVLTreeNode<T>* proot)
{
    proot->rchild = rightRotation(proot->rchild);
    return leftRotation(proot);
};

/*�������*/
/*�ݹ�ؽ��в���*/
/*���ز����ĸ��ڵ�*/
template <typename T>
AVLTreeNode<T>* AVLTree<T>::insert(AVLTreeNode<T>* &pnode, T key)
{
    //Ѱ�ҵ������λ��
    if (pnode == nullptr)
    {
        pnode = new AVLTreeNode<T>(key, nullptr, nullptr);
    }
    //����ֵ�ȵ�ǰ���ֵ�� ���뵽��ǰ������������
    else if (key > pnode->key)
    {
        pnode->rchild = insert(pnode->rchild, key);
        //��������ʧ��
        if (height(pnode->rchild) - height(pnode->lchild) == 2)
        {
            //���һ�� �������������ҽڵ㣬 ��������
            if (key > pnode->rchild->key)
                pnode=leftRotation(pnode);
            //������� ��������������ڵ�,��������������ת
            else if (key < pnode->rchild->key)
                pnode=rightLeftRotation(pnode);
        }
    }
    //����ֵ�ȵ�ǰ�ڵ�ֵС�� ���뵽��ǰ������������
    else if (key < pnode->key)
    {
        pnode->lchild = insert(pnode->lchild, key);
        //������뵼��ʧ��
        if (height(pnode->lchild) - height(pnode->rchild) == 2)
        {
            //������� ���뵽�����������ӽڵ��ϣ� ��������
            if (key < pnode->lchild->key)
                pnode = rightRotation(pnode);
            //����ģ� ���뵽���������Һ��ӽڵ��ϣ� �������������ת
            else if (key>pnode->lchild->key)
                pnode = leftRightRotation(pnode);
        }
    }
    pnode->height = max(height(pnode->lchild), height(pnode->rchild)) + 1;
    return pnode;
};

template <typename T>
void AVLTree<T>::insert(T key)
{
    insert(root, key);
};

/*�ݹ����ָ��Ԫ��*/
template <typename T>
AVLTreeNode<T>* AVLTree<T>::search_recurse(T key)
{
    return search_recurse(root,key);
};

template <typename T>
AVLTreeNode<T>* AVLTree<T>::search_recurse(AVLTreeNode<T>* pnode, T key) const
{
    if (pnode != nullptr)
    {
        if (key == pnode->key)
            return pnode;
        if (key > pnode->key)
            return search_recurse(pnode->rchild,key);
        else
            return search_recurse(pnode->lchild,key);
    }
    return nullptr;
};

/*�ǵݹ����ָ��Ԫ��*/
template <typename T>
AVLTreeNode<T>* AVLTree<T>::search_iterator(T key)
{
    return search_iterator(root, key);
};

template <typename T>
AVLTreeNode<T>* AVLTree<T>::search_iterator(AVLTreeNode<T>* pnode, T key) const
{
    while (pnode != nullptr)
    {
        if (pnode->key == key)
            return pnode;
        else if (key > pnode->key)
            pnode = pnode->rchild;
        else
            pnode = pnode->lchild;
    }
    return nullptr;
};

/*ɾ��ָ��Ԫ��*/
template<typename T>
AVLTreeNode<T>* AVLTree<T>::remove(AVLTreeNode<T>* & pnode, T key)
{
    if (pnode != nullptr)
    {
        if (key == pnode->key)//�ҵ�ɾ���Ľڵ�
        {
            //�� AVL Ҳ�Ƕ����������� ɾ���ڵ�Ҫά�������������������
            if (pnode->lchild != nullptr&&pnode->rchild != nullptr)
                //�����Ҷ���Ϊ��
            {
                if (height(pnode->lchild) > height(pnode->rchild))
                    //����������������
                {
                    //ʹ�����������ڵ������汻ɾ�ڵ㣬 ��ɾ�������ڵ�
                    AVLTreeNode<T>* ppre = maximum(pnode->lchild);
                    //���������ڵ�
                    pnode->key = ppre->key;//�����ڵ��ֵ���ǵ�ǰ���
                    pnode->lchild = remove(pnode->lchild, ppre->key);
                    //�ݹ��ɾ�����ڵ�
                }
                else
                {
                    //ʹ����С�ڵ������汻ɾ�ڵ㣬 ��ɾ������С�ڵ�
                    AVLTreeNode<T>* psuc = minimum(pnode->rchild);
                    //����������С�ڵ�
                    pnode->key = psuc->key;//����С�ڵ�ֵ���ǵ�ǰ���
                    pnode->rchild = remove(pnode->rchild, psuc->key);
                    //�ݹ��ɾ����С�ڵ�
                }
            }
            else
            {
                AVLTreeNode<T> * ptemp = pnode;
                if (pnode->lchild != nullptr)
                    pnode = pnode->lchild;
                else if (pnode->rchild != nullptr)
                    pnode = pnode->rchild;
                delete ptemp;
                return nullptr;
            }
        }
        else if (key > pnode->key)//Ҫɾ���Ľڵ�ȵ�ǰ�ڵ�� ��������������ɾ��
        {
            pnode->rchild = remove(pnode->rchild, key);
            if (height(pnode->lchild) - height(pnode->rchild) == 2)
                //ɾ���������ڵ㵼�²�ƽ��:�൱��������������
            {
                if
                        (height(pnode->lchild->rchild)>height(pnode->lchild->lchild))
                    pnode = leftRightRotation(pnode);//�൱�������
                else
                    pnode = rightRotation(pnode);//�൱�������
            }
        }
        else if (key < pnode->key)//Ҫɾ���Ľڵ�ȵ�ǰ�ڵ�С�� ��������������ɾ��
        {
            pnode->lchild= remove(pnode->lchild, key);
            if (height(pnode->rchild) - height(pnode->lchild) == 2)
                //ɾ���������ڵ㵼�²�ƽ�⣺ �൱������������һ
            {
                if
                        (height(pnode->rchild->lchild)>height(pnode->rchild->rchild))
                    pnode = rightLeftRotation(pnode);
                else
                    pnode = leftRotation(pnode);
            }
        }
        return pnode;
    }
    return nullptr;
};

template<typename T>
void AVLTree<T>::remove(T key)
{
    root =remove(root, key);
};

/*�������*/
template<typename T>
void AVLTree<T>::inOrder(AVLTreeNode<T>* pnode) const
{
    if (pnode != nullptr)
    {
        inOrder(pnode->lchild);
        cout << pnode->key << endl;
        inOrder(pnode->rchild);
    }
};

template<typename T>
void AVLTree<T>::InOrder()
{
    inOrder(root);
};

/*ǰ�����*/
template<typename T>
void AVLTree<T>::preOrder(AVLTreeNode<T>* pnode) const
{
    if (pnode != nullptr)
    {
        cout << pnode->key << endl;
        inOrder(pnode->lchild);
        inOrder(pnode->rchild);
    }
};

template<typename T>
void AVLTree<T>::preOrder()
{
    preOrder(root);
};

/*���б���*/
template<typename T>
void AVLTree<T>::postOrder(AVLTreeNode<T>* pnode) const
{
    if (pnode != nullptr)
    {
        inOrder(pnode->lchild);
        inOrder(pnode->rchild);
        cout << pnode->key << endl;
    }
}

template<typename T>
void AVLTree<T>::postOrder()
{
    postOrder(root);
};

/*���� AVL ��*/
template<typename T>
void AVLTree<T>::destory(AVLTreeNode<T>* & pnode)
{
    if (pnode != nullptr)
    {
        destory(pnode->lchild);
        destory(pnode->rchild);
        delete pnode;
        pnode = nullptr;
    }
};

template<typename T>
void AVLTree<T>::destory()
{
    destory(root);
}

#endif // AVL_HPP
