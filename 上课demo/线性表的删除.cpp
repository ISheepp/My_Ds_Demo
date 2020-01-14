#include <cstdio>

#define ElemType int
#define MAX_SIZE 50
//����˳���Ľṹ��
typedef struct
{
    ElemType data[MAX_SIZE];
    int length;
} SqList;

bool deleteMinElem(SqList &list, int &value)
{
    //����ֵΪvalue
    if (list.length == 0)
    {
        return false;
    }
    value = list.data[0];
    int index = 0;
    for (int i = 1; i < list.length; ++i)
    {
        if (list.data[i] < value)
        {
            index = i;
            value = list.data[i];
        }
    }

    //�����һ��Ԫ�ط��� iλ�õ�
    list.data[index] = list.data[list.length - 1];
    //���Ա�ĳ��ȼ�1
    list.length--;
    return true;
}
int main()
{
    SqList l;
    l.length = 4;
    l.data[0] = 11;
    l.data[1] = 41;
    l.data[2] = 2;
    l.data[3] = 31;
    int value = -1;

    for (int i = 0; i < l.length; ++i)
    {
        printf("%d\t", l.data[i]);
    }
    printf("\n");
    deleteMinElem(l, value);
    for (int i = 0; i < l.length; ++i)
    {
        printf("%d\t", l.data[i]);
    }
    printf("\nvalue:-->%d", value);
}