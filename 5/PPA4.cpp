/* Question: Find out the maximum profit (positive or negative) that can be earned, and return its value.
int prices[]: Prices of shares 

Example 1: The array 'prices[ ]' contains:  44000, 54000, 46000, 47000, 48000
In this example, if the buyer, buys a share on Monday i.e. at the rate of Rs. 44,000/-, and sells it on Tuesday, at the rate of Rs. 54,000/- the profit earned would be Rs. 10,000/-. A profit of Rs. 10,000/- cannot be earned on any other occassions. For example, if the buyer buys the share on Wednesday, i.e. at the rate of Rs. 46,000/- and sells it at the rate of Rs. 48,000/- on Friday, the profit earned is just Rs. 2,000/-, which is definitely less than Rs. 10,000/-. This is true for all other days too. Hence, the maximum profit that can be earned is Rs. 10,000/-

Example 2: The array 'prices[ ]' contains:  67000, 73000, 57000, 63000, 47000
In this example, if the buyer buys a share on Monday, at the rate of Rs. 67,000/-, and sells it on Tuesday, at the rate of Rs. 73,000/-, then the profit earned would be Rs. 6,000/-. The same profit is earned if the buyer buys a share on Wednesday at the rate of RS. 57,000/-, and sells it on Thursday, at the rate of Rs. 63,000/-. On no other occassion, the profit earned is more than Rs. 6,000/-. Hence, 6000 is the answer.

Example 3: The array 'prices[ ]' contains:  55000, 55000, 55000, 55000, 55000
In this example, if the buyer buys a share on any day, and sells the same on any day, the profit earned would be Rs.0/-, since the price of the share is the same on all days. Since, it is compulsory to buy and sell a share, the maximum profit that can be earned is 0. 

Example 4: The array 'prices[ ]' contains:  87000, 67000, 45000, 34000, 33000
In this example, irrespective of the buying and selling day, the profit earned would definitely be negative (i.e. loss). The maximum profit (in this case, the minimum damage) earned is, when the buyer, buys the share on Thursday at Rs. 34,000/- and sells it on Friday, at the rate of Rs. 34,000/-, which is Rs. -1,000/-. Hence, the maximum profit (minimum loss) is -1000.
*/

#include <iostream>
using namespace std;

int profitEarned(int prices[])
{
	int miniindx = 0, maxindx = 1;
	int rs = prices[maxindx] - prices[miniindx];//initiation of variables

    for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (rs < (prices[j] - prices[i]))
			{
				maxindx = j;
				miniindx = i;
				rs = prices[maxindx] - prices[miniindx];
			}
		}
	}

	return rs;
}

int main() {
    int a[] = {87000,  67000,  45000,  34000,  33000};
    cout << profitEarned(a) << endl;
    return 0;
}
