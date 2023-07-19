import sys 
theBoard = [' ',' ',' ',' ',' ',' ',' ',' ',' ']

def printBoard(board):
    print(board[0] + '|' + board[1] + '|' + board[2])
    print('-+-+-')
    print(board[3] + '|' + board[4] + '|' + board[5])
    print('-+-+-')
    print(board[6] + '|' + board[7] + '|' + board[8])
def win(w):
    pl=['X','O']
    winner=None
    for j in range(len(pl)):
    
       for i in range(0,9,3):
         if w[i]==w[i+1]==w[i+2]==pl[j]:
            winner=w[i]
       for i in range(0,2,1):
         if w[i]==w[i+3]==w[i+6]==pl[j]:
            winner=w[i]
       if w[0]==w[4]==w[8]==pl[j]:
           winner=w[0]
       elif w[2]==w[4]==w[6]==pl[j]:
           winner=w[2]
       
    if winner is not None:
        print("winner is ",winner)
        printBoard(theBoard)
        sys.exit()
    else:
        return
    
    

turn = 'X'
for i in range(9):
      printBoard(theBoard)
      print('Turn for ' + turn + '. Move on which space?(0 to 8)')
      move = int(input())
      if turn == 'X':
          theBoard[move] = 'X'
      else:
          theBoard[move] = 'O'

      if turn == 'X':
          turn = 'O'
      else:
          turn = 'X'
      if i>=5 and i<=9:
          win(theBoard)
print("Game has tied")
   
  
    
    
  
