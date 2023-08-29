// code for the ordered_set 
#include<bits/stdc++.h>
// Common file
#include <ext/pb_ds/assoc_container.hpp>
// Including tree_order_statistics_node_update
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set =tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
