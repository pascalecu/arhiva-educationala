string s = "abacaba";
s[0] = 'c';

cout << s.size() << '\n';  // 7

s[6] = '\0';  // caracterul nul

// abacab 7
// (nu se schimba mărimea)
cout << s << " " << s.size() << '\n';
