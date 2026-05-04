char str1[] = "abc";
char str2[] = "abc";

// Se va afișa 0 deoarece șirurile sunt la fel
cout << strcmp(str1, str2) << '\n';

char str3[] = "def";
char str4[] = "ghi";

// Se va afișa -1 deoarece primul șir este înaintea celui de al doilea
cout << strcmp(str3, str4) << '\n';

// Se va afișa 1 deoarece primul șir este după cel de al doilea
cout << strcmp(str4, str3) << '\n';
