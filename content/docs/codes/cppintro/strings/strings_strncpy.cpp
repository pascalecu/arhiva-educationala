char sursa[11] = "caine";
char destinatie[11] = "paine";

// Se va afișa "caine paine"
cout << sursa << " " << destinatie << '\n';

strncpy(destinatie, sursa, 1);

// Se va afișa "caine caine"
cout << sursa << " " << destinatie << '\n';
