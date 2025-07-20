int maxProfit(int* prices, int pricesSize) {
    int buy = 0, sell = 1;
    int profit = 0, maxProfit = 0;
    while(sell < pricesSize){
        if (prices[sell] < prices[buy]) buy = sell;
        else {
            profit = prices[sell] - prices[buy];
            if (profit>maxProfit) maxProfit = profit;
        }
        sell++;
    }
    return maxProfit;
}