#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>

void* message(void* var){
    int t = (int)var;


    printf("\n%d- Hi I'm thread ID=%lu\n",t+1,(int unsigned long)pthread_self());
}

int main(void){
    pthread_t threads[10];
    int report[10];
    for(int i=0;i<10;i++){
        report[i] = pthread_create(&threads[i],NULL,message,(void*)i);
    }
    for(int i=0;i<10;i++){
        pthread_join(threads[i],NULL);
    }
    return 0;
}
