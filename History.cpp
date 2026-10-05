//
//  History.cpp
//  cs32 project 1
//
//  Created by Alice Wang on 4/2/26.
//

#include "History.h"
using namespace std;

History::History(int nRows, int nCols) {
    m_rows = nRows;
    m_cols = nCols;
    for (int r = 0; r < nRows; r++)
        for (int c = 0; c < nCols; c++)
            m_grid[r][c] = 0;
}

bool History::record(int r, int c){
    if (r > m_rows || r < 1 || c > m_cols || c < 1){
        return false;
    }
    m_grid[r-1][c-1]++; //incrementing the value at the spot brain was eaten
    return true;
}

void History::display() const {
    clearScreen();
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
        {
            int helper = m_grid[r][c];
            
            if (helper == 0)
                cout << '.';
            else if (helper >= 26)
                cout << 'Z';
            else
                cout << char('@' + helper); //@ is char right before alphabet
        }
        cout << endl;
    }
    cout << endl;
}
