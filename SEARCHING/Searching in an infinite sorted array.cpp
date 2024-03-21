//naive approach
int searchInfinite(int arr[], int n, int t){
    int i=0;
while (true){
    if (arr[i]==t){
        return i;
    }
    if (arr[i]>t){
        return -1;
    }
    i++;
}
}

// optimised approach 
int searchInfinite(int arr[], int n , int t){
    if (arr[0]==t){
        return 0;
    }
 int   i=1;
  while (arr[i]<t){
    i*=2;
  }
  if (arr[i]==t){
    return i;
  }
  return binarySearch(arr,t, i/2+1, i-1); // binary search with low and high given
}
