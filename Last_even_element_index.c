#include<stdio.h>
int  main(){
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            c=i;
        }
    }
    printf("%d",c);
}