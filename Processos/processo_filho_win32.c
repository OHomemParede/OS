#include <windows.h>
#include <stdio.h>

int main(){
  STARTUPINFO si;
  PROCESS_INFORMATION pi;
  ZeroMemory(&si, sizeof(si));
  ZeroMemory(&pi, sizeof(pi));
  si.cb = sizeof(si);
  int filho;
  filho = CreateProcess(NULL,
                       "C:\\WINDOWS\\system32\\mspaint.exe",
                        NULL,
                        NULL,
                        FALSE,
                        0,
                        NULL,
                        NULL,
                        &si,
                        &pi);
  
  if(filho == 0){
    printf("Create Process Falied"); 
    return -1;
  }
  WaitForSingleObject(pi.hProcess, INFINITE);
  printf("Child Complete");
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);
  return 0;
}
