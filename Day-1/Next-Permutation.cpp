#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{ int i,j;
    for( i=n-2;i>=0;--i){
        if(permutation[i]<permutation[i+1]){
            break;
        }
    }
    if(i==-1){
        reverse(permutation.begin(),permutation.end());
    }else{
        for(j=n-1;j>i;j--){
            if(permutation[i]<permutation[j]){
                break;
            }
        }  
        swap(permutation[i],permutation[j]);
        reverse(permutation.begin()+i+1,permutation.end());
    }
 return permutation;
 
}

//https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
