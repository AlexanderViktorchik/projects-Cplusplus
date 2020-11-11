//#include <iostream>
//
//using namespace std;
//
//int main() {
//	cout << (2 + 3) * 5;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int v, t, s, g = 10;
//	cin >> t;
//	v = g * t;
//	int vm = v / 2;
//	s = vm * t;
//	cout << s;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() 
//{	
//	int a, b;
//	cin >> a >> b;
//	cout << a + b;
//	return 0;
//}

#include <iostream>
using namespace std;

int main() 
{	
	int a, b;
	cin >> a >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b;
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a % b;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a / b;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << (a + b - 1) / b;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int N, K = 10;
//    cin >> N;
//    cout << N / K;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int N, K = 10;
//    cin >> N;
//    cout << N % K;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int N;
//    cin >> N;
//    int K = N / 100, J = (N / 10) % 10, L = N % 10;
//    cout << K + J + L;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int N;
//    cin >> N;
//    int K = N / 2 + 1;
//    cout << K * 2;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int N, K, L;
//    cin >> N >> K >> L;
//    int X = ((N + K + L) + 2 - 1) / 2;
//    cout << X;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() 
//{
//    int A, B, N;
//    cin >> A >> B >> N;
//    int X = (A * 100 + B) * N;
//    int J = (X / 10) % 10, L = X % 10;
//    cout << X / 100 << "." << J * 10 + L;
//    return 0;
//}

#include <iostream>
using namespace std;
int main()
{
   int A;
   cin >> A;
   int h = A / 3600;
   int clearH24 = h / 24;
   int clearH = clearH24 * 24;
   int ansH = abs(clearH - h);
   int sek = A - (h * 3600); 
   int ansMin = sek / 60; 
   int clearSek = ansMin * 60;
   int ansSek = sek - clearSek;                                                                 
   if (ansSek < 10 && ansMin < 10 && ansH < 10) {
       cout << "0" << ansH << ":" << "0" << ansMin << ":" << "0" << ansSek;
       return 0;
   }
   else {
       if (ansSek < 10) {
           cout << ansH << ":" << ansMin << ":" << "0" << ansSek;
           return 0;
       }
       else {
           if (ansMin < 10) {
               cout << ansH << ":" << "0" << ansMin << ":" << ansSek;
               return 0;
           }
           else {
               if (ansH < 10) {
                   cout << "0" << ansH << ":" << ansMin << ":" << ansSek;
                   return 0;
               }
               else {
                   cout << ansH << ":" << ansMin << ":" << ansSek;
                   return 0;
               }
           }
       }
   }
}


