
while True:
    usr_command = input("start a new game? y/n \n")
    if usr_command == "n":
        break
    else:
        p1 = input("Player1 enter command: ")
        p2 = input("Player2 enter command: ")
        if p1 ==p2:
          print("draw")
        elif p1=="rock" and p2=="scissors":
          print("player1 win")
        elif p1=="rock" and p2=="paper":
          print("player2 win")
        elif p1=="scissors" and p2=="paper":
          print("player1 win")
        elif p1=="scissors" and p2=="rock":
          print("player2 win")
        elif p1=="paper" and p2=="scissors":
         print("player2 win")
        elif p1=="paper" and p2=="rock":
         print("player1 win")
