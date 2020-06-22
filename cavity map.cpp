//hackerrank
//You are given a square map as a matrix of integer strings. Each cell of the map has a value denoting its depth. We will call a cell of the map a cavity if and only if this cell is not on the border of the map and each cell adjacent to it has strictly smaller depth. Two cells are adjacent if they have a common side, or edge.
//Find all the cavities on the map and replace their depths with the uppercase character X.

#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {

    for(int i=1;i<grid.size()-1;i++)
    {
        for(int j=1;j<grid.size()-1;j++)
        {
            if(grid[i][j]>grid[i-1][j] && grid[i][j]>grid[i+1][j] && grid[i][j]>grid[i][j-1] && grid[i][j]>grid[i][j+1])
            {
                grid[i][j]='X';
            }
        }
    }

    return grid;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

