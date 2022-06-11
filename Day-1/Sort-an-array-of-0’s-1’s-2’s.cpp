#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low=0,mid=0,high=n-1;
    
    while(mid<=high){
        switch(arr[mid]){
            case 0: swap(arr[low],arr[mid]);
                mid++;
                low++;
                break;
                
            case 1: mid++;
                break;
            case 2: swap(arr[mid],arr[high]);
                high--;
                break;
                
        }
    }
}

//https://www.codingninjas.com/codestudio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
