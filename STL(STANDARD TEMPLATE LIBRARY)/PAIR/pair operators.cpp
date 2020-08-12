 #include<iostream>
 using namespace std;
int main() 
{ 
	pair <int, int > pair1=make_pair(2,9) ;
	pair <int, int > pair2=make_pair(2,11) ;//Syntax
 
	cout << (pair1 == pair2) << endl; 
	cout << (pair1 != pair2) << endl; 
	cout << (pair1 >= pair2) << endl; 
	cout << (pair1 <= pair2) << endl; 
	cout << (pair1 > pair2) << endl; 
	cout << (pair1 < pair2) << endl; 

	return 0; 
} 

