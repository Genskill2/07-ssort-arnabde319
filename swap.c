void swap_max(int a[], int l, int n){
  int max = a[n];
  int ml=n;
  for(int i=n+1;i<l;i++){
    if(a[i]>max){
      max=a[i];
      ml=i;
    }
   }
   if(a[n]<a[ml]){
    a[n]=a[n]+a[ml];
    a[ml]=a[n]-a[ml];
    a[n]=a[n]-a[ml];
   }
}


void ssort(int a[], int l){
  for(int i=0;i<l;i++){
    swap_max(a,l,i);
  }
}
