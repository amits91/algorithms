/*
 * =====================================================================================
 *
 *       Filename:  rotation.cpp
 *
 *    Description:  Rotation of array
 *
 *        Version:  1.0
 *        Created:  11/27/2016 05:26:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
//#define DEBUG

void rotate(vector<int> *Ap, int k)
{
    vector<int> &A = *Ap;
    if (k == A.size() || k == 0) {
        return;
    } else if (k > (int)A.size()) {
        k = k % A.size();
    } else if (k < 0) {
        k = A.size() + k;
    }
    int i = A.size() - 1;
    int j = i - k;
    while (i > 0) {
        if (j > 0) {
            swap(A[i--], A[j--]);
        } else {
            swap(A[i--], A[0]);
        }
    }
}

void print_arr(const vector<int> & A)
{
#ifdef DEBUG
    for (int i = 0; i < A.size(); ++i) {
        cout << " " << A[i];
    }
    cout << endl;
#endif
}

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
#ifdef DEBUG
    cout << "Arr: " << n << ", k: " << k << endl;
#endif
    print_arr(a);
    rotate(&a, k);
    print_arr(a);
    vector<int> o;
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        o.push_back(a[m]);
    }
    for (int i = 0; i < o.size(); ++i) {
        cout << o[i] << endl;
    }
    return 0;
}

