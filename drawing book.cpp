//HACKERRANK
//Ques: Brie’s Drawing teacher asks her class to open their books to a page number.
// Brie can either start turning pages from the front of the book or from the back of the book. 
//She always turns pages one at a time. When she opens the book, page 1 is always on the right side.
//When she flips page , she sees pages 2 and 3. Each page except the last page will always be printed on both sides. 
//The last page may only be printed on the front, given the length of the book.
// If the book is n pages long, and she wants to turn to page p, what is the minimum number of pages she will turn? 
//She can start at the beginning or the end of the book.
//Given n and p, find and print the minimum number of pages Brie must turn in order to arrive at page .

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */

     if(p==1 || p==n)
     {
         return 0;
     }

     else
     {
         int fturns=0;
         int bturns=0;
         for(int i=2;i<n;i=i+2)
         {
             fturns++;
             if(p==i || p==i+1)
             {
                 break;
             }
         }
         if(n%2==0)
         {
             for(int i=n-1;i>1;i=i-2)
             {
                 bturns++;
                 if(p==i || p==i-1)
                 {
                     break;
                 }
             }
         }
         else
         {
             for(int i=n;i>1;i=i-2)
             {
                 if(p==i || p==i-1)
                 {
                     break;
                 }
                 bturns++;

             }
         }

         return (min(fturns,bturns));

     }

     

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

