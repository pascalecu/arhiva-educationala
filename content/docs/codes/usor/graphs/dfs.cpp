vector<vector<int>> graf;

void dfs(int nod, vector<bool>& vizitat) {
    vizitat[nod] = true;

    // Ca exemplu
    cout << nod << ' ';

    for (auto vecin : graf[nod]) {
        if (!vizitat[vecin]) {
            dfs(vecin, vizitat);
        }
    }
}