char str[] = "serverul roalgo este plin de persoane pasionate de algoritmica";
char *p = strrchr(str, 'p');

if (p != nullptr) {
    // Se va afișa "pasionate de algoritmica"
    cout << p;
}
