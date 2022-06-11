vector<vector<long long int>> printPascal(int n) 
{
   vector<vector<long long int>>pascal(n);
        for(int i=0;i<n;i++){
            pascal[i]=vector<long long int>(i+1,1);
            if(i>1){
                for(int j=1;j<=i-1;j++){
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                }
            }
            
        }
    return pascal;

}

//https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
