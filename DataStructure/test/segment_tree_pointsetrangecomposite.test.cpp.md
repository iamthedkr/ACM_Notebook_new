---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: DataStructure/SegTree.h
    title: DataStructure/SegTree.h
  - icon: ':x:'
    path: Math/modulo_anta.h
    title: Math/modulo_anta.h
  - icon: ':question:'
    path: buffered_reader.h
    title: buffered_reader.h
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_set_range_composite
    links:
    - https://judge.yosupo.jp/problem/point_set_range_composite
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: bits/stdc++.h:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_set_range_composite\"\
    \n\n#include \"bits/stdc++.h\"\nusing namespace std;\n\n#include \"../SegTree.h\"\
    \n#include \"../../Math/modulo_anta.h\"\n#include \"../../buffered_reader.h\"\n\
    \nstruct Func {\n    modular a, b;\n};\n\nFunc op(Func l, Func r) {\n    return\
    \ Func{\n        l.a * r.a,\n        r.a * l.b + r.b\n    };\n}\nFunc e() {\n\
    \    return Func{1, 0};\n}\n\nint32_t main() {\n    ios::sync_with_stdio(0); cin.tie(0);\n\
    \    int n = IO::get_int<int>();\n    int q = IO::get_int<int>();\n    vector<Func>\
    \ funcs(n);\n    for (auto& f : funcs) {\n        int a = IO::get_int<int>();\n\
    \        int b = IO::get_int<int>();\n        f = {a, b};\n    }\n\n    SegTree<Func,\
    \ op, e> seg_tree(funcs);\n    while (q--) {\n        int typ = IO::get_int<int>();\n\
    \        if (typ == 0) {\n            int pos = IO::get_int<int>();\n        \
    \    int a = IO::get_int<int>();\n            int b = IO::get_int<int>();\n  \
    \          seg_tree.set(pos, {a, b});\n        } else {\n            int l = IO::get_int<int>();\n\
    \            int r = IO::get_int<int>();\n            auto f = seg_tree.prod(l,\
    \ r);\n            modular x(IO::get_int<int>());\n            cout << f.a * x\
    \ + f.b << '\\n';\n        }\n    }\n    return 0;\n}\n"
  dependsOn:
  - DataStructure/SegTree.h
  - Math/modulo_anta.h
  - buffered_reader.h
  isVerificationFile: true
  path: DataStructure/test/segment_tree_pointsetrangecomposite.test.cpp
  requiredBy: []
  timestamp: '2022-01-05 23:41:04+08:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: DataStructure/test/segment_tree_pointsetrangecomposite.test.cpp
layout: document
redirect_from:
- /verify/DataStructure/test/segment_tree_pointsetrangecomposite.test.cpp
- /verify/DataStructure/test/segment_tree_pointsetrangecomposite.test.cpp.html
title: DataStructure/test/segment_tree_pointsetrangecomposite.test.cpp
---