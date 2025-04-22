// Problem #2: Find Maximum up to 10
// ● Read an integer N (2 <= N <= 10)
// ● Then read N integers, find which of them has the biggest value and print it.
// ● Inputs
// ○ 5 1 3 2 4 2 ⇒ 4
// ■ 5 means read 5 integers
// ■ Then we read them [1 3 2 4 2]. Their maximum is 4
// ○ 10 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
// ■ Same as last homework. This time we are given first N (10)






































// solution
// #include<iostream>
// using namespace std;

// int main() {
// 	int s1, e1, s2, e2;

// 	cin >> s1 >> e1 >> s2 >> e2;

// 	if(e1 < s2 || e2 < s1)
// 		cout<<-1<<"\n";		// One of them ends before start of the another
// 	else
// 	{
// 		// This is tricky. Trying to list all cases will be hard and buggy
// 		// You need to notice which ones came first
// 		// Then consider the possible cases (e.g. one of them completely inside the second)

// 		// However, more thinking makes it easier
// 		// The intersection starts at the maximum of the starts
// 		// The intersection ends at the minimum of the ends
// 		// Draw some examples

// 		if(s1 < s2)	s1 = s2;	// maximum of (s1, s2)
// 		if(e1 > e2) e1 = e2;	// minimum of (e1, e2)

// 		cout<<s1<<" "<<e1<<"\n";
// 	}
// 	/*
// 	Cases
// 	1 15  20 30		==> -1
// 	20 30 1 15		==> -1
// 	1 6    1 6		==> 1 6
// 	1 6    1 3		==> 1 3
// 	1 6    2 3		==> 2 3
// 	1 6    3 8		==> 3 6
// 	3 8    1 6		==> 3 6

// 	*/
// 	return 0;
// }

