/**
 * Class that represents the current state of the board.
 */
class Board{

public:

   /**
    *
    *
    * param boardLength:
    * param boardHeight:
    */
   Board( int boardLength, int boardHeight ){
      setBoardLength( boardLength );
      setBoardHeight( boardHeight );
      setNumberFreeSquare( boardLength * boardHeight );
   }

   /**
    * Default constructor.
    */
   Board(){
   }

   /**
    *
    */
   int* getState(){
      return state;
   }

   /**
    *
    */
   void setState( int stateP[] ){
      //state = stateP;
   }

   /**
    *
    */
   int getNumFreeSquares(){
      return numFreeSquares;
   }

   /**
    * Places the players move on the board.
    *
    * param num:  The number associated with the player.
    * param pos:  The position on the board to place the move.
    *
    * returns:    True if the move was placed successfully, false otherwise.
    */
   bool setSquare( int num, int pos ){

      int* board = getState();

      if( board[ pos ] == 0 ){
         // change to setState/Pos
         state[ pos ] = num;
         numFreeSquares--;
         return true;
      }

   return false;

   }

   /**
    *
    */
   void setBoardLength( int boardLengthP ){
      boardLength = boardLengthP;
   }

   /**
    *
    */
   int getBoardLength(){
      return boardLength;
   }

   /**
    *
    */
   void setBoardHeight( int boardHeightP ){
      boardHeight = boardHeightP;
   }

   /**
    *
    */
   int getBoardHeight(){
      return boardHeight;
   }

   /**
    *
    */
   void setNumberFreeSquare( int numFreeSquaresP ){
      numFreeSquares = numFreeSquaresP;
   }



private:

   /**
    *
    */
   int boardLength;

   /**
    *
    */
   int boardHeight;

   /**
    * Set with constructor?
    */
   int numFreeSquares;

   /**
    * Dynamically set with constructor, and remove with destructor?
    */
   int state[ 9 ] = {};

}; 
