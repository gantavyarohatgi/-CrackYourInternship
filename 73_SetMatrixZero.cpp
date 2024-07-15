class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        int i;
        int j;
        int k;
        int flag = 0;
        vector<pair<int,int>> pairs;
        for(i=0;i<rows;i++)
        {
            flag=0;
            for(j=0;j<columns;j++)
            {
                if(matrix[i][j] == 0)
                {
                    pairs.push_back({i,j});
                }
            }
        }

        // for(k=0;k<pairs.size();k++)
        // {
        //     for(int p=0;p<rows;p++)
        //     {
        //         matrix[p][pairs[k].second] = 0;
        //     }

        //     for(int p=0;p<columns;p++)
        //     {
        //         matrix[pairs[k].first][p] = 0;
        //     }
        // }

        for(auto pair:pairs)
        {
            int r = pair.first;
            int c = pair.second;

            for(int p=0;p<rows;p++)
            {
                matrix[p][c] = 0;
            }

            for(int p=0;p<columns;p++)
            {
                matrix[r][p] = 0;
            }
        }
    }
};