#include<iostream>
#include<string.h>

using namespace std;
main() {
   char s[] = "Programming\0Lang";
      cout<<strlen(s)<<","<<sizeof(s);
}

// -----------------------------------------------------


#include <iostream>
using namespace std;

int main()
{
    int A[] = { 24, 65, 76, 37 };
    int* p = (A + 2);
    cout << *A * 5;
    return 0;
}

// -----------------------------------------------------


#include<iostream>
using namespace std;
int main()
{
  int a=25;
  int b,c;
  b = a++;
  c = a;
  cout << a<< b <<c;
  return 0;
}

// -----------------------------------------------------


#include <iostream>
using namespace std;

int main()
{
   int i = 10;
    cout << (i = 10 ? 1 : 20 ? 35 : 2);
    return 0;
    }

// -----------------------------------------------------


#include <iostream>
using namespace std;

int cal(int i, int j)
{ return (++i * j++);}

int main()
{
    int a= cal(20,30);
    cout<<a;
    return 0;
}

// -----------------------------------------------------


#include<iostream>
#include<string.h>

using namespace std;
main() {
   char s[] = "Programming\0Lang";
      cout<<strlen(s)<<","<<sizeof(s);
}

#include <iostream>
using namespace std;
 int main()
{
 enum color_type {red, orange, yellow, green, blue, violet};
 color_type shirt, pants;
 shirt = red;
 pants = blue;
 cout << shirt << " " << pants << endl;
 return 0;
}

// -----------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
   char ch[25];
   cin>>ch;
   cout<<ch;
   return 0;
    }

// -----------------------------------------------------

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   string str = "ObjectOriented Programming";
        str.insert(str.size() / 6, "++");
        cout << str ;
        return 0;
}

// -----------------------------------------------------

#include <iostream>
using namespace std;
#define sqr(x) x * x

int main()
{
	int x;
	cout<< sqr(x+2);
	return 0;
}

// -----------------------------------------------------


#include <iostream>
using namespace std;

void f()
{
  static int i = 3;
	cout << (i);
	if(--i) f();
}

int main()
{
  f();
  return 0;
}

// -----------------------------------------------------


