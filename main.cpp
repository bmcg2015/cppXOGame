// todo:
// -algorithm to check if anyone has won (checkIfWinner).
// -check if square taken before setting. just don't set (no error message). reissue pick a
//    number message.
// -drawBoard once more before stating Draw.


/**
 * An XO (tic-tac-toe) game implementation.
 */
#include <iostream>

#include "Board.h"

void drawBoard();
bool checkIfWinner( Board b );


/**
 * Outputs the current state of the board based on the board class.
 *
 * param b: The board object.
 */
void drawBoard( Board b ){

   int* boardState = b.getState();

   // change so board size not hardcoded, and use iterator:

   std::cout << "-------------" << std::endl;

   for( int i = 0; i < 9; i++ ){

      if( 0 == i % 3 )
         std::cout << "| ";
      else if( 0 == ( i + 2 ) % 3 )
         std::cout << " | ";
      else if( 0 == ( i + 1 ) % 3 )
         std::cout << " | ";

      switch( boardState[ i ] ){
         case 0: std::cout << "-"; break;
         case 1: std::cout << "X"; break;
         case 2: std::cout << "Y"; break;
         default: std::cout << "-"; break;
      }

      if( 0 == ( i + 1 ) % 3 ){
         std::cout << " |" << std::endl;
         std::cout << "-------------" << std::endl;
      }

   }

}

int main(){

   std::cout << "Hello" << std::endl;

   bool winner = false;

   // Create a new instance of the game board:
   Board board;

   //board.setSquare( 1, 3 );
   //board.setSquare( 2, 4 );

   int gameIteration = 0;
   int player = 1;
   int playerInput = 0;

   // Main game loop:
   while( ( not winner ) and ( 0 != board.getNumFreeSquares() ) ){

      // Draw the board on standard output:
      drawBoard( board );

      // Decide who is playing in this round:
      if( 0 == gameIteration % 2 )
         player = 1;
      else
         player = 2;

      // how can the user identify the square?
      //    pick a row and a column instead?
      //    use a 2d int array?

      // check is input numeric, number in range, and check if square not already taken.

      std::cout << "Player " << player << ", please enter a square:" << std::endl;
      std::cin >> playerInput;

      board.setSquare( player, playerInput );

      // check if anyone has won.
      if( checkIfWinner( board ) )
         winner = true;
      //else if( 0 = board.numFreeSquares )
         //break;

      gameIteration++;

   }// End of main game loop.


   if( winner )
      std::cout << "Player " << player << " has won" << std::endl;
   else
      std::cout << "Draw" << std::endl;


}

/**
 * Checks to see if the current player has won.
 *
 * param b: The board object for the current game.
 *
 * returns: True if the player has won, false otherwise.
 */
bool checkIfWinner( Board b ){

   bool winner = false;
   
   return winner;

}
