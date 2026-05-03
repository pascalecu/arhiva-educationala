char str[] = "wow-ce-multe-cuvinte-in-acest-sir";
char *token = strtok(str, "-");

// Se va afișa "wow ce multe cuvinte in acest sir"
while (token != nullptr) {
    cout << token << " ";
    token = strtok(nullptr, "-");
}
