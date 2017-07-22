/**                                                                                          
 * Class that represents the current state of the board.                                     
 */                                                                                          
class Board{                                                                                 
                                                                                             
public:                                                                                      
                                                                                             
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
    *                                                                                        
    */                                                                                       
   void setSquare( int num, int pos ){                                                       
      state[ pos ] = num;                                                                    
      numFreeSquares--;                                                                      
   }                                                                                         
                                                                                             
private:                                                                                     
                                                                                             
   /**                                                                                       
    *                                                                                        
    */                                                                                       
   int boardLength = 3;                                                                      
                                                                                             
   /**                                                                                       
    *                                                                                        
    */                                                                                       
   int boardHeight = 3;                                                                      
                                                                                             
   /**                                                                                       
    *                                                                                        
    */                                                                                       
   int numFreeSquares = 9;                                                                   
                                                                                             
   /**                                                                                       
    *                                                                                        
    */                                                                                       
   // change to loop and depends on board size:                                              
   int state[ 9 ] = {};                                                                      
                                                                                             
}; 
