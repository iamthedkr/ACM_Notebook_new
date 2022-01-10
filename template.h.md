---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: DP/divide_conquer.cpp
    title: DP/divide_conquer.cpp
  - icon: ':warning:'
    path: DP/knuth.cpp
    title: DP/knuth.cpp
  - icon: ':warning:'
    path: Geometry/SPOJ_ALIENS.cpp
    title: Geometry/SPOJ_ALIENS.cpp
  - icon: ':warning:'
    path: Geometry/basic.cpp
    title: Geometry/basic.cpp
  - icon: ':warning:'
    path: Geometry/circle.cpp
    title: Geometry/circle.cpp
  - icon: ':warning:'
    path: Geometry/polygon.cpp
    title: Geometry/polygon.cpp
  - icon: ':warning:'
    path: Graph/Misc/EulerPath.cpp
    title: Graph/Misc/EulerPath.cpp
  - icon: ':warning:'
    path: Math/Polynomial/VOJ_POST2.cpp
    title: Math/Polynomial/VOJ_POST2.cpp
  - icon: ':warning:'
    path: Misc/Die.cpp
    title: Misc/Die.cpp
  - icon: ':warning:'
    path: String/eertree.cpp
    title: String/eertree.cpp
  - icon: ':warning:'
    path: String/lyndon.cpp
    title: String/lyndon.cpp
  - icon: ':warning:'
    path: String/minmove.cpp
    title: String/minmove.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: DataStructure/test/binary_trie.test.cpp
    title: DataStructure/test/binary_trie.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/basic_ccw.test.cpp
    title: Geometry/tests/basic_ccw.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/basic_line_intersection.test.cpp
    title: Geometry/tests/basic_line_intersection.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/basic_projection.test.cpp
    title: Geometry/tests/basic_projection.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/basic_reflection.test.cpp
    title: Geometry/tests/basic_reflection.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/basic_segment_distance.test.cpp
    title: Geometry/tests/basic_segment_distance.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/basic_segment_intersect.test.cpp
    title: Geometry/tests/basic_segment_intersect.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/polygon_area.test.cpp
    title: Geometry/tests/polygon_area.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/polygon_convex_cut.test.cpp
    title: Geometry/tests/polygon_convex_cut.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/polygon_convex_diameter.test.cpp
    title: Geometry/tests/polygon_convex_diameter.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/polygon_convex_hull.test.cpp
    title: Geometry/tests/polygon_convex_hull.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/polygon_in_convex.test.cpp
    title: Geometry/tests/polygon_in_convex.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/polygon_in_polygon.test.cpp
    title: Geometry/tests/polygon_in_polygon.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/polygon_is_convex.test.cpp
    title: Geometry/tests/polygon_is_convex.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/z_basic_ccw.test.cpp
    title: Geometry/tests/z_basic_ccw.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/z_basic_segment_intersect.test.cpp
    title: Geometry/tests/z_basic_segment_intersect.test.cpp
  - icon: ':x:'
    path: Geometry/tests/z_polygon_area.test.cpp
    title: Geometry/tests/z_polygon_area.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/z_polygon_convexhull.test.cpp
    title: Geometry/tests/z_polygon_convexhull.test.cpp
  - icon: ':heavy_check_mark:'
    path: Geometry/tests/z_polygon_is_convex.test.cpp
    title: Geometry/tests/z_polygon_is_convex.test.cpp
  - icon: ':heavy_check_mark:'
    path: Graph/tests/articulation_points.test.cpp
    title: Graph/tests/articulation_points.test.cpp
  - icon: ':heavy_check_mark:'
    path: Graph/tests/floyd_aizu.test.cpp
    title: Graph/tests/floyd_aizu.test.cpp
  - icon: ':heavy_check_mark:'
    path: Math/tests/factorize_aizu.test.cpp
    title: Math/tests/factorize_aizu.test.cpp
  - icon: ':heavy_check_mark:'
    path: Math/tests/is_prime_yukicoder.test.cpp
    title: Math/tests/is_prime_yukicoder.test.cpp
  _isVerificationFailed: true
  _pathExtension: h
  _verificationStatusIcon: ':question:'
  attributes:
    links:
    - https://quangloc99.github.io/2021/07/30/my-CP-debugging-template.html
  bundledCode: "#line 1 \"template.h\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)\n#define FORD(i,a,b)\
    \ for(int i=(a),_b=(b); i>=_b; i--)\n#define REP(i,a) for(int i=0,_a=(a); i<_a;\
    \ i++)\n#define EACH(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end();\
    \ ++it)\n\n#define DEBUG(x) { cout << #x << \" = \"; cout << (x) << endl; }\n\
    #define PR(a,n) { cout << #a << \" = \"; FOR(_,1,n) cout << a[_] << ' '; cout\
    \ << endl; }\n#define PR0(a,n) { cout << #a << \" = \"; REP(_,n) cout << a[_]\
    \ << ' '; cout << endl; }\n\n#define sqr(x) ((x) * (x))\n\n// For printing pair,\
    \ container, etc.\n// Copied from https://quangloc99.github.io/2021/07/30/my-CP-debugging-template.html\n\
    template<class U, class V> ostream& operator << (ostream& out, const pair<U, V>&\
    \ p) {\n    return out << '(' << p.first << \", \" << p.second << ')';\n}\n\n\
    template<class Con, class = decltype(begin(declval<Con>()))>\ntypename enable_if<!is_same<Con,\
    \ string>::value, ostream&>::type\noperator << (ostream& out, const Con& con)\
    \ {\n    out << '{';\n    for (auto beg = con.begin(), it = beg; it != con.end();\
    \ it++) {\n        out << (it == beg ? \"\" : \", \") << *it;\n    }\n    return\
    \ out << '}';\n}\ntemplate<size_t i, class T> ostream& print_tuple_utils(ostream&\
    \ out, const T& tup) {\n    if constexpr(i == tuple_size<T>::value) return out\
    \ << \")\"; \n    else return print_tuple_utils<i + 1, T>(out << (i ? \", \" :\
    \ \"(\") << get<i>(tup), tup); \n}\ntemplate<class ...U> ostream& operator <<\
    \ (ostream& out, const tuple<U...>& t) {\n    return print_tuple_utils<0, tuple<U...>>(out,\
    \ t);\n}\n\nmt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());\n\
    long long get_rand(long long r) {\n    return uniform_int_distribution<long long>\
    \ (0, r-1)(rng);\n}\n\nvoid solve();\n\nint main() {\n    ios::sync_with_stdio(0);\
    \ cin.tie(0);\n    solve();\n    return 0;\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n#define FOR(i,a,b) for(int\
    \ i=(a),_b=(b); i<=_b; i++)\n#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b;\
    \ i--)\n#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)\n#define EACH(it,a) for(__typeof(a.begin())\
    \ it = a.begin(); it != a.end(); ++it)\n\n#define DEBUG(x) { cout << #x << \"\
    \ = \"; cout << (x) << endl; }\n#define PR(a,n) { cout << #a << \" = \"; FOR(_,1,n)\
    \ cout << a[_] << ' '; cout << endl; }\n#define PR0(a,n) { cout << #a << \" =\
    \ \"; REP(_,n) cout << a[_] << ' '; cout << endl; }\n\n#define sqr(x) ((x) * (x))\n\
    \n// For printing pair, container, etc.\n// Copied from https://quangloc99.github.io/2021/07/30/my-CP-debugging-template.html\n\
    template<class U, class V> ostream& operator << (ostream& out, const pair<U, V>&\
    \ p) {\n    return out << '(' << p.first << \", \" << p.second << ')';\n}\n\n\
    template<class Con, class = decltype(begin(declval<Con>()))>\ntypename enable_if<!is_same<Con,\
    \ string>::value, ostream&>::type\noperator << (ostream& out, const Con& con)\
    \ {\n    out << '{';\n    for (auto beg = con.begin(), it = beg; it != con.end();\
    \ it++) {\n        out << (it == beg ? \"\" : \", \") << *it;\n    }\n    return\
    \ out << '}';\n}\ntemplate<size_t i, class T> ostream& print_tuple_utils(ostream&\
    \ out, const T& tup) {\n    if constexpr(i == tuple_size<T>::value) return out\
    \ << \")\"; \n    else return print_tuple_utils<i + 1, T>(out << (i ? \", \" :\
    \ \"(\") << get<i>(tup), tup); \n}\ntemplate<class ...U> ostream& operator <<\
    \ (ostream& out, const tuple<U...>& t) {\n    return print_tuple_utils<0, tuple<U...>>(out,\
    \ t);\n}\n\nmt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());\n\
    long long get_rand(long long r) {\n    return uniform_int_distribution<long long>\
    \ (0, r-1)(rng);\n}\n\nvoid solve();\n\nint main() {\n    ios::sync_with_stdio(0);\
    \ cin.tie(0);\n    solve();\n    return 0;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: template.h
  requiredBy:
  - Misc/Die.cpp
  - DP/divide_conquer.cpp
  - DP/knuth.cpp
  - Geometry/SPOJ_ALIENS.cpp
  - Geometry/circle.cpp
  - Geometry/basic.cpp
  - Geometry/polygon.cpp
  - Graph/Misc/EulerPath.cpp
  - Math/Polynomial/VOJ_POST2.cpp
  - String/eertree.cpp
  - String/minmove.cpp
  - String/lyndon.cpp
  timestamp: '2022-01-10 03:15:26+08:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - DataStructure/test/binary_trie.test.cpp
  - Geometry/tests/polygon_convex_hull.test.cpp
  - Geometry/tests/z_polygon_area.test.cpp
  - Geometry/tests/basic_line_intersection.test.cpp
  - Geometry/tests/polygon_in_convex.test.cpp
  - Geometry/tests/z_polygon_convexhull.test.cpp
  - Geometry/tests/polygon_in_polygon.test.cpp
  - Geometry/tests/polygon_is_convex.test.cpp
  - Geometry/tests/basic_ccw.test.cpp
  - Geometry/tests/polygon_area.test.cpp
  - Geometry/tests/z_basic_ccw.test.cpp
  - Geometry/tests/basic_segment_distance.test.cpp
  - Geometry/tests/basic_segment_intersect.test.cpp
  - Geometry/tests/basic_projection.test.cpp
  - Geometry/tests/polygon_convex_cut.test.cpp
  - Geometry/tests/z_polygon_is_convex.test.cpp
  - Geometry/tests/z_basic_segment_intersect.test.cpp
  - Geometry/tests/basic_reflection.test.cpp
  - Geometry/tests/polygon_convex_diameter.test.cpp
  - Graph/tests/articulation_points.test.cpp
  - Graph/tests/floyd_aizu.test.cpp
  - Math/tests/factorize_aizu.test.cpp
  - Math/tests/is_prime_yukicoder.test.cpp
documentation_of: template.h
layout: document
redirect_from:
- /library/template.h
- /library/template.h.html
title: template.h
---