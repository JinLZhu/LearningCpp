#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
    // 对传入的参数对象进行强制类型转换
    // 由无类型指针变为整型指针，然后再读取
    int tid = *((int* )threadid);
    cout << "Hello Runoob！ 线程ID，" << tid << endl;
    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    int indexs[NUM_THREADS];
    int rc, i;

    for (i=0; i<NUM_THREADS; i++){
        cout << "main() : 创建线程，" << i << endl;
        indexs[i] = i;     //先保存i的值
        // 传入的时候必须强制转为void*
        rc = pthread_create(&threads[i], NULL, 
                PrintHello, (void *)&(indexs[i]));

        if(rc){
            cout << "Error: 无法创建线程，" << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
    
    return 0;
}
