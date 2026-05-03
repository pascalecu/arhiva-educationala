char sursa[11] = "hello";
char destinatie[11] = "world";

// Se va afișa "hello world"
cout << sursa << " " << destinatie << '\n';

strcpy(destinatie, sursa);

// Se va afișa "hello hello"
cout << sursa << " " << destinatie << '\n';
