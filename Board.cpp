#include "Board.h"

Board::Board( int boardLength, int boardHeight ){
   setBoardLength( boardLength );
   setBoardHeight( boardHeight );
   setNumberFreeSquare( boardLength * boardHeight );
}

Board::Board(){
}

int* Board::getState(){
   return state;
}

void Board::setState( int stateP[] ){
   //state = stateP;
}

int Board::getNumFreeSquares(){
   return numFreeSquares;
}

bool Board::setSquare( int num, int pos ){

   int* board = getState();

   if( board[ pos ] == 0 ){
      // change to setState/Pos
      state[ pos ] = num;
      numFreeSquares--;
      return true;
   }

   return false;

}

void Board::setBoardLength( int boardLengthP ){
   boardLength = boardLengthP;
}

int Board::getBoardLength(){
   return boardLength;
}

void Board::setBoardHeight( int boardHeightP ){
   boardHeight = boardHeightP;
}

int Board::getBoardHeight(){
   return boardHeight;
}

void Board::setNumberFreeSquare( int numFreeSquaresP ){
   numFreeSquares = numFreeSquaresP;
}
