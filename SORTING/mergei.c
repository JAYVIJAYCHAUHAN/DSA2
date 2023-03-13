#include<stdio.h>
#include<stdlib.h>

  void swap(int *x,int *y){
      int temp=*x;
      *x=*y;
      *y=temp;
  }
  void Merge(int a[],int l, int mid, int h){
      int i=l,j=mid+1,k=l;
      int b[300];
      while(i<=mid && j<=h){
          if(a[i]<a[j])
          b[k++]=a[i++];
          else
          b[k++]=a[j++];
      }
      for(;i<=mid;i++)
      b[k++]=a[i++];
      for(;j<=h;j++)
      b[k++]=a[j++];
      for(i=l;i<=h;i++)
      a[i]=b[i];
  }
  void MergeSort(int a[],int n){
      int p,l,mid, h,i;
      for(p=2;p<=n;p=p*2){
          for(i=0;i+p-1<=n;i=i+p){
              l=i;
              h=i+p-1;
              mid=(l+h)/2;
              Merge(a,l,mid,h);
          }

      }
      if(p/2<n)
      Merge(a,0,p/2-1,n);
  }
  int main(){
      int i ,n=10;
      int a[]={34,2,33,45,23,9,40,56,34,90};
      MergeSort(a,n);
      for(i=0;i<10;i++)
          printf("%d\n",a[i]);
          printf("\n");
      
      return 0;
  }