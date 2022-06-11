long long maxSubarraySum(int arr[], int n)
{if(n==0){
    return 0;
}
    long long int sum =0,max_sum=0;
   
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max_sum){
            max_sum=sum;
        }
        if(sum<=0)
            sum=0;
    }
    return max_sum;
}

//https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
