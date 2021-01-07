#include<bits/stdc++.h>

using namespace std;

template<class Fun>
class y_combinator_result {
  Fun fun_;
public:
  template<class T>
  explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}

  template<class ...Args>
  decltype(auto) operator()(Args &&...args) {
    return fun_(std::ref(*this), std::forward<Args>(args)...);
  }
};

template<class Fun>
decltype(auto) y_combinator(Fun &&fun) {
  return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}

// Debug Code (Debugging in C++)
void __print(int x){cerr<<x;}
void __print(long x){cerr<<x;}
void __print(long long x){cerr<<x;}
void __print(unsigned x){cerr<<x;}
void __print(unsigned long x){cerr<<x;}
void __print(unsigned long long x){cerr<<x;}
void __print(float x){cerr<<x;}
void __print(double x){cerr<<x;}
void __print(long double x){cerr<<x;}
void __print(char x) {cerr<<'\''<<x<<'\'';}
void __print(const char *x){cerr<<'\"'<< x<<'\"';}
void __print(const string &x){cerr << '\"' << x << '\"';}
void __print(bool x){cerr<<(x ? "true":"false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr<<"\n{"; __print(x.first); cerr<< ','; __print(x.second); cerr<< '}';}
template<typename T>
void __print(T const& x){int f = 0; cerr<<"\n{"; for(auto &i: x) cerr<<(f++ ? "," : ""), __print(i); cerr<<"}";}
void _print(){cerr<<"\n";}
template <typename T, typename... V>
void _print(T const& t, V const&... v){__print(t); if (sizeof...(v)) cerr<< ", "; _print(v...);}

#ifdef DEBUG
#define deb(x...) cerr<<#x<< "="; _print(x)
#define debL(x...) cerr<<__LINE__<<" >> "<<#x<<"=";_print(x)
#else
#define deb(x...)
#endif

using ll=long long;

// arrays
#define ar array

// vectors
#define ve vector

#define sz(x) int(x.size())
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sortA(x) sort(all(x))
#define reverseA(x) reverse(all(x))

const int MOD=1e9+7;
const int INF=1e9;
const ll LLINF=1e18;

// grid problems (UP,RIGHT,DOWN,LEFT)
const int dx[]={-1,0,1,0},dy[]={0,1,0,-1};

void solve(){

}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	//freopen("test.in","r",stdin);
	int testCases=1;
	for(int t=1;t<=testCases;++t){
		solve();
		//cout<<"\n";
	}
	return 0;
}

