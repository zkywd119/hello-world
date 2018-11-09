#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
  int* num;
  int size;
}Solution;

Solution* create(int* num, int size)
{
  Solution* obj = (Solution*) malloc(sizeof(Solution));
  obj->num = num;
  obj->size = size;
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
Solution* reset(int* temp, int size)
{
  return create(temp,size);
}
void shuffle(Solution* obj, int size)
{
  srand(time(NULL));
  for(int i =size-1;i>0;i--)
  {
    int j = rand() % (i+1);
    swap((obj->num)+i,(obj->num)+j);
  }
}
void print(int* arr, int size)
{
  for(int i =0;i<size;++i)
  {
    printf("%d ",*(arr+i));
  }
  printf("\n");
}
int main()
{
    int nums[] = {1,2,3,4,5,6,7,8};
    int *arr;
    arr = nums;
    int size;
    size = sizeof(nums)/sizeof(nums[0]);
    int temp[size];
    for(int i=0;i<size;++i)
    {
      temp[i] = nums[i];
    }
    Solution* obj  = create(arr,size);
    printf("the original is:\n");
    print(obj->num,size);
    shuffle(obj,size);
    printf("After shuffle is:\n");
    print(obj->num,size);
    obj = reset(temp,size);
    printf("After reset is:\n");
    print(obj->num,size);
    return 0;
}
