#include<bits/stdc++.h>
using namespae std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;

    // distance to edges
    int tSpan = n-rQueen;
    int lSpan = cQueen-1;
    int bSpan = rQueen-1;
    int rSpan = n-cQueen;
    // distance to corners
    int blSpan = min (cQueen, rQueen) -1;
    int brSpan = min (rQueen-1, n-cQueen);
    int tlSpan = min (n-rQueen, abs(1-cQueen));
    int trSpan = n - max(cQueen, rQueen);

    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        if (rObstacle == rQueen) // in the same row
        {
            if (cObstacle > cQueen)
                rSpan = min (rSpan, cObstacle-cQueen-1);
            if (cObstacle < cQueen)
                lSpan = min (lSpan, cQueen-cObstacle-1);
        }
        if (cObstacle == cQueen) // in the same column
        {
            if (rObstacle > rQueen)
                tSpan = min (tSpan, rObstacle-rQueen-1);
            if (rObstacle < rQueen)
                bSpan = min (bSpan, rQueen-rObstacle-1);
        }
        if (abs(cQueen-cObstacle) == abs(rQueen-rObstacle)) // in the same diagonal
        {
            if  (rObstacle > rQueen){ // Higher part.
                if  (cObstacle < cQueen) // left
                    tlSpan = min(tlSpan, rObstacle-rQueen-1);
                if  (cObstacle > cQueen) // right
                    trSpan = min(trSpan, cObstacle-cQueen-1);
            }
            if  (rObstacle < rQueen){ // Lower part
                if  (cObstacle < cQueen) // left
                    blSpan = min(blSpan, cQueen-cObstacle-1);
                if  (cObstacle > cQueen) // right
                    brSpan = min(brSpan, cObstacle-cQueen-1);
          }
        }
    }

    cout << tSpan+rSpan+bSpan+lSpan+blSpan+brSpan+trSpan+tlSpan;
    return 0;
}
