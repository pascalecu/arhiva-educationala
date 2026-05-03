char sursa[20] = "informatica";
char destinatie[20] = "mate";

// Se va afișa "informatica mate"
cout << sursa << " " << destinatie << '\n';

strncat(destinatie, sursa, 4);

// Se va afișa "mateinfo"
cout << destinatie;
