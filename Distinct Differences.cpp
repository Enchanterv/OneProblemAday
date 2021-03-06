/* Q. Given an array of size N find the difference between all distinct pairs and push them into the array if not present.
   After this is performed,output the Kth largest number in the array.

   E. 6                //Size of input array(N)                                                                                                                       
      2                //(K)                                                                                                                       
      1 3 7 9 21 47    // Input Array                                                                                                           
 
   Output - 
   1 2 3 4 6 7 8 9 12 14 18 20 21 26 38 40 44 46 47                                                                            
   2th Largest : 46              
 
   ----------------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>

int q1 (std::vector < int >A, int l, int k)
{
  std::vector < int >B;
  std::vector < int >::iterator it, it2;

  for (int i = 0; i < l - 1; i++)
    for (int j = i + 1; j < l; j++)
      {
    	it = std::find (B.begin (), B.end (), abs (A.at (i) - A.at (j)));
    	it2 = std::find (A.begin (), A.end (), abs (A.at (i) - A.at (j)));
    	if (it == B.end () && it2 == A.end ())
	        B.push_back (abs (A.at (i) - A.at (j)));
      }

  A.insert (A.end (), B.begin (), B.end ());
  std::sort (A.begin (), A.end ());
  for (auto i:A)
    std::cout << i << " ";

  std::cout << "\n " << k << "th Largest : " << A.at (A.size () - k);
}

int main ()
{
  int n, k;
  std::cin >> n;
  std::cin >> k;

  int a[n];
  for (int i = 0; i < n; i++)
    std::cin >> a[i];

  std::vector < int >vec (a, a + n);

  q1 (vec, n, k);
}
