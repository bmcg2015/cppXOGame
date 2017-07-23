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
   Board( int boardLength, int boardHeight );

   /**
    * Default constructor.
    */
   Board();

   /**
    *
    */
   int* getState();

   /**
    *
    */
   void setState( int stateP[] );

   /**
    *
    */
   int getNumFreeSquares();

   /**
    * Places the players move on the board.
    *
    * param num:  The number associated with the player.
    * param pos:  The position on the board to place the move.
    *
    * returns:    True if the move was placed successfully, false otherwise.
    */
   bool setSquare( int num, int pos );

   /**
    *
    */
   void setBoardLength( int boardLengthP );

   /**
    *
    */
   int getBoardLength();

   /**
    *
    */
   void setBoardHeight( int boardHeightP );

   /**
    *
    */
   int getBoardHeight();

   /**
    *
    */
   void setNumberFreeSquare( int numFreeSquaresP );



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
