#include <stdio.h>
#include <stdlib.h>

//顺序表的定义：
#define ListSize 100 //表空间大小可根据实际需要而定，这里假设为100
typedef int DataType; // DataType可以是任何相应的数据类型如int, float或char

typedef struct {
    DataType data[ListSize]; //向量data用于存放表结点
    int length;              //当前的表长度
} SeqList;

void CreateList(SeqList* L, int n);
void PrintList(SeqList L);
int LocateList(SeqList L, DataType x);
void InsertList(SeqList* L, DataType x, int i);
void DeleteList(SeqList* L, int i);

int main() {
    SeqList L;
    int i, x;
    int n = 10; //欲建立的顺序表长度
    L.length = 0;

    CreateList(&L, n); //建立顺序表
    PrintList(L);      //打印顺序表

    printf("输入要查找的值：");
    scanf("%d", &x);
    i = LocateList(L, x); //顺序表查找
    printf("查找的值所在的位置：%d\n", i);

    printf("输入要插入的位置和元素：");
    scanf("%d%d", &i, &x);
    InsertList(&L, x, i); //顺序表插入
    PrintList(L);         //打印顺序表

    printf("输入要删除的位置：");
    scanf("%d", &i);
    DeleteList(&L, i); //顺序表删除
    PrintList(L);      //打印顺序表
    return 0;
}

//顺序表的建立：
void CreateList(SeqList* L, int n) {
    //在此插入必要的语句
    FILE* fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        puts("打开文件失败~！ data.txt");
        exit(-1);
    }
    int data;
    L->length = 0;
    while (fscanf(fp, "%d", &L->data[L->length]) != EOF)
        L->length++;

    fclose(fp);
}

//顺序表的打印：
void PrintList(SeqList L) {
    //在此插入必要的语句
    int i;
    for (i = 0; i < L.length; i++)
        printf("%d ", L.data[i]);
    printf("\n");
}

//顺序表的查找：
int LocateList(SeqList L, DataType x) {
    //在此插入必要的语句
    int i;
    for(i=0;i<L.length;i++)
    {
        if(L.data[i]==x)        
        {
            return i;
        }

    }

    return 0;
}

//顺序表的插入：
void InsertList(SeqList* L, DataType x, int i) {
    //在此插入必要的语句
}

//顺序表的删除：
void DeleteList(SeqList* L, int i) {
    //在此插入必要的语句
}
