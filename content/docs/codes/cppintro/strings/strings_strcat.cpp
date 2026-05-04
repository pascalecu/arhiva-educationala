char sursa[11] = "hello";
char destinatie[11] = "world";

// Se va afișa "hello world"
cout << sursa << " " << destinatie << '\n';

strcat(destinatie, sursa);

// Se va afișa "worldhello"
cout << destinatie;
