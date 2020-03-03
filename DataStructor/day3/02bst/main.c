#include <stdio.h>
#include <stdlib.h>

typedef struct _TreeNode
{
    int _data;
    struct _TreeNode * _left;
    struct _TreeNode * _right;
}TreeNode;

//TreeNode *initBst()
//{
//    return NULL;
//}

void initBst(TreeNode ** r)
{
    *r = NULL;
}

void insertBst(TreeNode ** r, int data)
{
    TreeNode * t = (*r);
    if(*r == NULL)
    {
        *r = (TreeNode*)malloc(sizeof(TreeNode));
        (*r)->_data = data;
        (*r)->_left = (*r)->_right = NULL;
    }
    else
    {
        while(1)
        {
            if(data > t->_data)
            {
                if(t->_right == NULL)
                {
                    t->_right = (TreeNode*)malloc(sizeof(TreeNode));
                    t->_right->_data = data;
                    t->_right->_left = t->_right->_right = NULL;
                    break;
                }
                t = t->_right;
            }
            else
            {
                if(t->_left == NULL)
                {
                    t->_left = (TreeNode*)malloc(sizeof(TreeNode));
                    t->_left->_data = data;
                    t->_left->_left = t->_left->_left = NULL;
                    break;
                }
                t = t->_left;
            }
        }
    }
}

void insertBstTraverse(TreeNode ** r, int data)
{
    if(*r == NULL)
    {
        *r = (TreeNode*)malloc(sizeof(TreeNode));
        (*r)->_data = data;
        (*r)->_left = (*r)->_right = NULL;
    }
    else
    {
        if(data > (*r)->_data)
            insertBstTraverse(&(*r)->_right,data);
        else
            insertBstTraverse(&(*r)->_left,data);
    }
}

void midOrderTraverse(TreeNode * r)
{
    if(r)
    {
        midOrderTraverse(r->_left);
        printf("%d ",r->_data);
        midOrderTraverse(r->_right);
    }
}

TreeNode * searchBst(TreeNode * r, int find)
{
    while(r)
    {
        if(r->_data == find)
            return r;
        else if(find > r->_data)
            r = r->_right;
        else
            r = r->_left;
    }
    return NULL;
}

//µÝ¹é°æ
TreeNode * searchBstRecursive(TreeNode * r, int find)
{
    if(r)
    {
        if(r->_data == find)
            return r;
        else if(find > r->_data)
            return searchBstRecursive(r->_right,find);
        else
            return searchBstRecursive(r->_left,find);
    }
    return NULL;
}

TreeNode * getMinNodeBst(TreeNode * r)
{
    if(r)
    {
        while(r->_left)
        {
            r = r->_left;
        }
        return r;
    }
    return NULL;
}

TreeNode * getMaxNodeBst(TreeNode * r)
{
    if(r)
    {
        while(r->_right)
        {
            r = r->_right;
        }
        return r;
    }
    return NULL;
}

TreeNode * getParentBst(TreeNode *r,TreeNode * child)
{
    static TreeNode *parent = NULL;
    if(r)
    {
        if(r->_left == child || r->_right == child)
            parent = r;

        getParentBst(r->_left,child);
        getParentBst(r->_right,child);
    }
    return parent;
}

void deleteBst(TreeNode **r, TreeNode * pDel)
{
    TreeNode * t = *r, *parent, *minRight;

    if(*r == NULL || pDel == NULL) return ;
    parent = getParentBst(t,pDel);
    if(pDel->_left == NULL && pDel->_right == NULL)
    {
        if(*r == pDel)
        {
            free(t);
            *r = NULL;
            return ;
        }

        if(parent->_left == pDel)
            parent->_left = NULL;
        else
            parent->_right = NULL;

        free(pDel);
    }
    else if(pDel->_left != NULL && pDel->_right == NULL)
    {
        if(*r == pDel)
        {
            *r = pDel->_left;
            free(pDel);
            return;
        }
        if(parent->_left == pDel)
            parent->_left = pDel->_left;
        else
            parent->_right = pDel->_left;

        free(pDel);
    }
    else if(pDel->_left == NULL && pDel->_right != NULL)
    {
        if(*r == pDel)
        {
            *r = pDel->_right;
            free(pDel);
            return;
        }
        if(parent->_right == pDel)
            parent->_left = pDel->_right;
        else
            parent->_right = pDel->_right;

        free(pDel);
    }
    else
    {
        minRight = getMinNodeBst(pDel->_right);
        pDel->_data = minRight->_data;

        parent = getParentBst(t,minRight);

        if(minRight != pDel->_right)
        {
            parent->_left = minRight->_right;

        }
        else
        {
            parent->_right = minRight->_right;
        }
        free(minRight);
    }
}

void destroyBst(TreeNode * r)
{
    if(r)
    {
        destroyBst(r->_left);
        destroyBst(r->_right);
        free(r);
    }
}

int main()
{
    //    TreeNode * root;
    //    initBst(&root);

    TreeNode * root = NULL;
    insertBstTraverse(&root,30);
    insertBstTraverse(&root,8);
    insertBstTraverse(&root,15);
    insertBstTraverse(&root,36);
    insertBstTraverse(&root,100);
    insertBstTraverse(&root,32);

    midOrderTraverse(root);
    putchar(10);

    TreeNode * pfind = searchBstRecursive(root,30);
    TreeNode * pfind2 = searchBstRecursive(root,100);
    if(pfind)
        printf("find %d\n",pfind->_data);
    else
        printf("find none\n");

    TreeNode * mi = getMinNodeBst(root);
    printf("%d\n",mi->_data);

    TreeNode * ma = getMaxNodeBst(root);
    printf("%d\n",ma->_data);

    TreeNode * parents = getParentBst(root,pfind2);
    printf("%d's father node is %d\n",pfind2->_data,parents->_data);

    deleteBst(&root,pfind);
    midOrderTraverse(root);

    destroyBst(root);
    root = NULL;

    if(root == NULL)
        printf("\ntree is empty!\n");

    return 0;
}
