#include <pthread.h> // A biblioteca de Threads
#include <stdio.h> // Esse voce ja sabe...
#include <unistd.h> // Esse serve para usar o sleep()

//________Funcoes para roda na thread; func_A() e func_B()________
void *func_A(void *agr){
  for(int a=0;a<6;a++){
    printf("func_A: %d\n", a);
    sleep(1);
  }
  return NULL;
}

void* func_B(void *arg){
  for(int a=0;a<3;a++){
    printf("func_B: %d\n", a);
    sleep(1);
  }
  return NULL;
}


//____________M A I N____________
void main(){
  pthread_t thread_A, thread_B;
  pthread_create(&thread_A, NULL, func_A, NULL);
  pthread_create(&thread_B, NULL, func_B, NULL);
  pthread_join(thread_A, NULL);//esperando a func_A chegar ao fim
  pthread_join(thread_B, NULL);//esperando a func_B chegar ao fim
}
