#include<stdio.h>
#include<omp.h>
#include<math.h>
int main(){

#pragma omp parallel 
{
int i;
int j;
//printf("Hello world from thread %d , n threads %d\n",omp_get_thread_num(),omp_get_num_threads());
for(i=0;i<5;i++){
int S=1;
for(j=1;j<1000;j++){
S+=j*S*i;
}
printf("%d : %d \n",S,omp_get_thread_num());
};
};
return 0;
}
