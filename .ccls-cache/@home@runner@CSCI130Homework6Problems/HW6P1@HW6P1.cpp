#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

char func_computer_choice() {
  srand(time(NULL));
  int A = rand() % 5; // chooses a random number between 0 and 5
  char B;             // preparing an answer

  switch (A) {
  case 0: // Rock
    cout << "Rock\n";
    B = 'R';
    break;
  case 1: // Paper
    cout << "Paper\n";
    B = 'P';
    break;
  case 2: // Scissors
    cout << "Scissors\n";
    B = 'S';
    break;
  case 3: // Lizard
    cout << "Lizard\n";
    B = 'L';
    break;
  case 4: // Spock
    cout << "Spock\n";
    B = 'K';
    break;
  }
  return B;
}

int game_loop() {

  char player_choice, R, P, S, L, K; // declare variables
  char computer_choice;
  int x = 1;
  // R = R;
  // P = P;
  // S = S;
  // L = L;
  // K = K;

  computer_choice = (func_computer_choice());

  // cout << "\nPlease choose: Rock, Paper, Scissors, Lizard, or Spock." <<
  // endl;

  cin >> player_choice; // player chooses rock, paper, scissors...
  if (player_choice == 'R') {
    if (computer_choice == 'L') // win
    {
      cout << "Rock crushes Lizard. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'S') // win
    {
      cout << "Rock smashes Scissors. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'P') // loss
    {
      cout << "Paper covers Rock. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == 'K') // loss
    {
      cout << "Spock vaporizes Rock. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie." << endl;

      return 2;
    }
  }
  if (player_choice == 'P') {
    if (computer_choice == 'R') // win
    {
      cout << "Paper cover Rock. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'K') // win
    {
      cout << "Paper disproves Spock. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'S') // loss
    {
      cout << "Scissors cut Paper. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == 'L') // loss
    {
      cout << "Lizard eats Paper. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie." << endl;
      return 2;
    }
  }
  if (player_choice == 'S') {
    if (computer_choice == 'P') // win
    {
      cout << "Scissors cut Paper. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'L') // win
    {
      cout << "Scissors decapitate Lizard. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'R') // loss
    {
      cout << "Rock crushes Scissors. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == 'K') // loss
    {
      cout << "Spock smashes Scissors. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie." << endl;
      return 2;
    }
  }
  if (player_choice == 'L') {
    if (computer_choice == 'K') // win
    {
      cout << "Lizard poisons Spock. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'P') // win
    {
      cout << "Lizard eats Paper. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'S') // loss
    {
      cout << "Scissors decapitates Lizard. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == 'R') // loss
    {
      cout << "Rock crushes Lizard. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie." << endl;
      return 2;
    }
  }
  if (player_choice == 'K') {
    if (computer_choice == 'S') // win
    {
      cout << "Spock smashes Scissors. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'R') // win
    {
      cout << "Spock vaporizes Rock. You win!" << endl;
      return 0;
    }
    if (computer_choice == 'P') // loss
    {
      cout << "Paper disproves Spock. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == 'L') // loss
    {
      cout << "Lizard poisons Spock. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie." << endl;
      return 2;
    }
  } else
    cout << "this doesn't work. Please try again\n";
}

int main() {

  int i, a, comp_win, player_win, ties;

  cout << "Are you ready to play 'Rock, Paper, Scissors, Lizard, Spock?'"
       << endl;
  cout << "Enter: \nR for 'Rock' \nP for 'Paper \nS for 'Scissors' \nL for "
          "'Lizard' \nK for 'Spock'\n\n";

  for (i = 1; i <= 3; i++)
    a = game_loop();
  switch (a) {
  case 0:
    player_win++;
    break;
  case 1:
    comp_win++;
    break;
  case 2:
    ties++;
    break;
  }
  
  if (player_win > comp_win)
    cout << "You beat the computer!" << endl;
  else if (player_win < comp_win)
    cout << "The computer beat you. . ." << endl;
  else if (player_win == comp_win)
    cout << "You tied the computer.";
  return 0;
}