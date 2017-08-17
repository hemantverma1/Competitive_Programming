ass Solution {

public:

    void rotate(vector<vector<int>>& m) {

        //first take transpose

        int n=m.size(), tmp;

        for(int i=0; i<n; i++)

            for(int j=i+1; j<n; j++)

                if(i!=j){

                    tmp=m[i][j];

                    m[i][j]=m[j][i];

                    m[j][i]=tmp;

                }

        

        //now swap two complimentary positions in a row

        for(int i=0; i<n; i++)

            for(int j=0; j<n/2; j++){

                tmp=m[i][j];

                m[i][j]=m[i][n-1-j];

                m[i][n-1-j]=tmp;

            }

    }

};
