int maximumProfit(vector<int> &prices){
  int maxi=0,j=0;
    
    for(int i=1;i<prices.size();i++){
        if(prices[j]>prices[i]){
            j=i;
        }
        
        if((prices[i]-prices[j])>maxi){
            maxi=prices[i]-prices[j];
        }
    }
    return maxi;
}

//https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
