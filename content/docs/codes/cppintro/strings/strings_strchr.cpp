char str[] = "serverul roalgo este plin de persoane pasionate de algoritmica";
char *p = strchr(str, 'p');

if (p != nullptr) {
    // Se va afișa "plin de persoane pasionate de algoritmica"
    cout << p;
}
