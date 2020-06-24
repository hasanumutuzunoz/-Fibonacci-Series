
//Fibonacci Series
//Write a function that calculates the nth Fibonacci number in O(n) time
using namespace std;

int number;
//int fibArray[999] = { 0, 1 };

int fib(int n)
{
    //METHOD 1
    if (n <= 1)
        number = n;

    else
        number = fib(n - 1) + fib(n - 2);

        return number;

    
    //METHOD 2
    /*
    if (n <= 1)
    {
        return fibArray[n];
    }
    
    else
    {
        int y = 2;
        for (int i = 1; i < n; i++)
        {
            fibArray[y] = fibArray[y - 1] + fibArray[y - 2];
            y++;
        }
        return fibArray[n];
    }
  */
}

int main()
{
    return fib(30);
}

// by Hasan Umut Uzunoz