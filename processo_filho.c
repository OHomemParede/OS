#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
  pid_t pid;
  pid = fork(); //<- chamada de sistema para a criaçao de um processo filho
  //agora é o seguinte o *pid* pode ter varios valores
  //dentro do processo filho, o pid tem valor 0
  //dentro do processo pai, o pid tem o valor do processo filho
  //a fork() retorna um valor negativo, caso tenha ocorrido algum erro.
  if(pid<0){
    printf("erro\n");
    exit(1);
  }
  if(pid == 0){
    printf("Filho: id is %d,  pid valor is %d\n", getpid(), pid);
  }
  else{
    printf("Pai: id is %d, pid valor is %d\n", getpid(), pid);
  }
  printf("pid valor -> %d -->", pid);
  system("date")
}
