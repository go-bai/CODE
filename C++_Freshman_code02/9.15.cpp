#ifndef TICTACTOE_H
#define TICTACTOE_H
class TicTacToe
{
private:
    enum Status { WIN, DRAW, CONTINUE }; // enumeration constants
    int board[ 3 ][ 3 ];
public:
    TicTacToe(); // default constructor
    void makeMove(); // make move
    void printBoard(); // print board
    bool validMove( int, int ); // validate move
    bool xoMove( int ); // x o move
    Status gameStatus(); // game status
}; // end class TicTacToe
#endif
//类成员函数：
#include <iostream>
using std::cin;
using std::cout;
#include <iomanip>
using std::setw;
#include "TicTacToe.h" // include definiton of class TicTacToe
TicTacToe::TicTacToe()
{
    for ( int j = 0; j < 3; j++ ) // initialize board

        for ( int k = 0; k < 3; k++ )
            board[ j ][ k ] = ' ';
} // end TicTacToe constructor
bool TicTacToe::validMove( int r, int c )
{
    return r >= 0 && r < 3 && c >= 0 && c < 3 && board[ r ][ c ] == ' ';
} // end function validMove
// must specify that type Status is part of the TicTacToe class.
// See Chapter 24 for a discussion of namespaces.
TicTacToe::Status TicTacToe::gameStatus()
{
    int a;
    // check for a win on diagonals
    if ( board[ 0 ][ 0 ] != ' ' && board[ 0 ][ 0 ] == board[ 1 ][ 1 ] &&
            board[ 0 ][ 0 ] == board[ 2 ][ 2 ] )
        return WIN;
    else if ( board[ 2 ][ 0 ] != ' ' && board[ 2 ][ 0 ] ==
              board[ 1 ][ 1 ] && board[ 2 ][ 0 ] == board[ 0 ][ 2 ] )
        return WIN;
    // check for win in rows
    for ( a = 0; a < 3; ++a )

        if ( board[ a ][ 0 ] != ' ' && board[ a ][ 0 ] ==
                board[ a ][ 1 ] && board[ a ][ 0 ] == board[ a ][ 2 ] )
            return WIN;
    // check for win in columns
    for ( a = 0; a < 3; ++a )
        if ( board[ 0 ][ a ] != ' ' && board[ 0 ][ a ] ==
                board[ 1 ][ a ] && board[ 0 ][ a ] == board[ 2 ][ a ] )
            return WIN;
    // check for a completed game
    for ( int r = 0; r < 3; ++r )
        for ( int c = 0; c < 3; ++c )
            if ( board[ r ][ c ] == ' ' )
                return CONTINUE; // game is not finished
    return DRAW; // game is a draw
} // end function gameStatus
void TicTacToe::printBoard()
{
    cout << "   0    1    2\n\n";
    for ( int r = 0; r < 3; ++r )
    {
        cout << r;
        for ( int c = 0; c < 3; ++c )
        {
            cout << setw( 3 ) << static_cast< char > ( board[ r ][ c ] );
            if ( c != 2 )
                cout << " |";
        } // end for
        if ( r != 2 )
            cout << "\n ____|____|____\n     |    |    \n";
    } // end for
    cout << "\n\n";
} // end function printBoard
void TicTacToe::makeMove()
{
    printBoard();
    while ( true )
    {
        if ( xoMove( 'X' ) )
            break;
        else if ( xoMove( 'O' ) )
            break;
    } // end while structure
} // end function makeMove
bool TicTacToe::xoMove( int symbol )
{
    int x;
    int y;
    do
    {
        cout << "Player " << static_cast< char >( symbol )
             << " enter move: ";
        cin >> x >> y;
        cout << '\n';
    }
    while ( !validMove( x, y ) );
    board[ x ][ y ] = symbol;
    printBoard();
    Status xoStatus = gameStatus();
    if ( xoStatus == WIN )
    {
        cout << "Player " << static_cast< char >( symbol ) << " wins!\n";
        return true;
    } // end if
    else if ( xoStatus == DRAW )
    {
        cout << "Game is a draw.\n";
        return true;
    } // end else if
    else // CONTINUE
        return false;
} // end function xoMove
//测试函数：
#include "TicTacToe.h" // include definiton of class TicTacToe
int main()
{
    TicTacToe g; // creates object g of class TicTacToe
    g.makeMove(); // invokes function makeMove
    return 0;
} // end main
