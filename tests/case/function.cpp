void foo();
foo(1);
foo::bar();
foo(a, b, c);
foo(A a, B b, C c);
foo<T>();
foo<decltype(a > b)>();
foo<std::vector<int>>();
foo<std::vector<decltype(a > b)>>();
foo<decltype(bar<T>())>();
