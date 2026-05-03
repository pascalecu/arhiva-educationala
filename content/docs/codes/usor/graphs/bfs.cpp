vector<vector<int>> graf;
vector<int> distanta;
queue<int> q;

void bfs(int nod_start) {
    q.push(nod_start);
    distanta[nod_start] = 0;

    while (!q.empty()) {
        int nod = q.front();
        q.pop();

        for (auto vecin : graf[nod]) {
            if (distanta[vecin] == -1) {
                distanta[vecin] = distanta[nod] + 1;
                q.push(vecin);
            }
        }
    }
}