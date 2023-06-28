int sumofArray(vector<int>& arr ){
    int size=arr.size()-1;
    int sum=0;
    for (int i = 0; i < size; i++) {
      sum = sum + arr[i];
    }
    return sum;
}

bool ispossible(vector<int>& arr, int n, int m,int mid){
    int student=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
      if (pageSum+arr[i] <=mid) {
        pageSum = pageSum + arr[i];
      }
      else{
          student++;
          pageSum=0;
          if(student<=m && arr[i]<=mid){
              pageSum=arr[i];
          }
          else{
              return false;
          }
          if (m > n)
          {
            return false;
          }
      }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    int s=0;
    int e=sumofArray(arr);
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
        mid=(s+e)/2;
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

//Allocate Books
//coding blocks