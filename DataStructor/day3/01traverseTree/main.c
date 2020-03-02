#include <stdio.h>
#include "mystack.h"
//先中后 访问根节点的时机不同

#if 0
                    a1
            b2               c3
        d4       e5               f6
        preOrder : 1 2 4 5 3 6 中左右
        midOrder : 4 2 5 1 3 6 左中右
        postOrder: 4 5 2 6 3 1 左右中;
#endif

void preOrderTraverse(TreeNode * r)
{
    if(r)
    {
        printf("%d ",r->_data);
        preOrderTraverse(r->_left);
        preOrderTraverse(r->_right);
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

void postOrderTraverse(TreeNode * r)
{
    if(r)
    {
        postOrderTraverse(r->_left);
        postOrderTraverse(r->_right);
        printf("%d ",r->_data);
    }
}

//先中后的 非递归形式 后层序遍历
void preOrderIterator(TreeNode * r)
{
    if(r)
    {
        Stack s;
        initStack(&s,1000);

        while(r || !isStackEmpty(&s))
        {
            while(r)
            {
                printf("%d ",r->_data);
                push(&s,r);
                r = r->_left;
                //压栈
            }
            r = pop(&s);
            r = r->_right;
            //出栈
        }
    }
}

void midOrderIterator(TreeNode * r)
{
    if(r)
    {
        Stack s;
        initStack(&s,1000);

        while(r || !isStackEmpty(&s))
        {
            while(r)
            {
                push(&s,r);
                r = r->_left;
                //压栈
            }
            r = pop(&s);
            printf("%d ",r->_data);
            r = r->_right;
            //出栈
        }
    }
}

//循环后序遍历

int getTreeHeightPostOrder(TreeNode * r)
{
    int lH,rH,maxH;
    if(r)
    {
        lH = getTreeHeightPostOrder(r->_left);
        rH = getTreeHeightPostOrder(r->_right);
        maxH = lH>rH ? lH : rH;
        return maxH + 1;
    }
    return 0;
}

int main()
{
    TreeNode a,b,c,d,e,f,m;
    TreeNode * root = &a;
    a._data = 1; b._data = 2; c._data = 3;
    d._data = 4; e._data = 5; f._data = 6;
    m._data = 7;

    a._left = &b; a._right = &c;
    b._left = &d; b._right = &e;
    c._left = NULL; c._right = &f;
    d._right = &m;
    d._left = e._left = e._right = f._left = f._right = m._right = m._left = NULL;

    preOrderTraverse(root);
    putchar(10);
    midOrderTraverse(root);
    putchar(10);
    postOrderTraverse(root);
    putchar(10);
    preOrderIterator(root);
    putchar(10);
    midOrderIterator(root);
    putchar(10);

    int height = getTreeHeightPostOrder(root);

    printf("height = %d\n",height);

    return 0;
}
