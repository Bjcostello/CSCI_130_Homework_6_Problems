#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

char func_computer_choice() {
  int A = rand() % 4; // chooses a random number between 0 and 5
  char B;     // preparing an answer

  switch (A) {
  case 0: // Rock
    cout << "Rock";
    B = 'R';
    break;
  case 1: // Paper
    cout << "Paper";
    B = 'P';
    break;
  case 2: // Scissors
    cout << "Scissors";
    B = 'S';
    break;
  case 3: // Lizard
    cout << "Lizard";
    B = 'L';
    break;
  case 4: // Spock
    cout << "Spock";
    B = 'K';
    break;
  }
  return B;
}

int game_loop() {

  char player_choice, R, P, S, L, K; // declare variables
  string computer_choice;
  // R = R;
  // P = P;
  // S = S;
  // L = L;
  // K = K;

  computer_choice = (func_computer_choice());

  // cout << "\nPlease choose: Rock, Paper, Scissors, Lizard, or Spock." <<
  // endl;

  cin >> player_choice; // player chooses rock, paper, scissors...

  if ((player_choice != R) and (player_choice != P) and (player_choice != S) and
      (player_choice != L) and (player_choice != K)) {
    cout << "this doesn't work. Please try again";
  }

  if (player_choice == R) {
    if (computer_choice == "L") // win
    {
      cout << "Rock crushes Lizard. You win!" << endl;
      return 0;
    }
    if (computer_choice == "S") // win
    {
      cout << "Rock smashes Scissors. You win!" << endl;
      return 0;
    }
    if (computer_choice == "P") // loss
    {
      cout << "Paper covers Rock. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == "K") // loss
    {
      cout << "Spock vaporizes Rock. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie.";
      return 2;
    }
  }
  if (player_choice == P) {
    if (computer_choice == "R") // win
    {
      cout << "Paper cover Rock. You win!" << endl;
      return 0;
    }
    if (computer_choice == "K") // win
    {
      cout << "Paper disproves Spock. You win!" << endl;
      return 0;
    }
    if (computer_choice == "S") // loss
    {
      cout << "Scissors cut Paper. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == "L") // loss
    {
      cout << "Lizard eats Paper. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie.";
      return 2;
    }
  }
  if (player_choice == S) {
    if (computer_choice == "P") // win
    {
      cout << "Scissors cut Paper. You win!" << endl;
      return 0;
    }
    if (computer_choice == "L") // win
    {
      cout << "Scissors decapitate Lizard. You win!" << endl;
      return 0;
    }
    if (computer_choice == "R") // loss
    {
      cout << "Rock crushes Scissors. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == "K") // loss
    {
      cout << "Spock smashes Scissors. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie.";
      return 2;
    }
  }
  if (player_choice == L) {
    if (computer_choice == "K") // win
    {
      cout << "Lizard poisons Spock. You win!" << endl;
      return 0;
    }
    if (computer_choice == "P") // win
    {
      cout << "Lizard eats Paper. You win!" << endl;
      return 0;
    }
    if (computer_choice == "S") // loss
    {
      cout << "Scissors decapitates Lizard. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == "R") // loss
    {
      cout << "Rock crushes Lizard. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie.";
      return 2;
    }
  }
  if (player_choice == K) {
    if (computer_choice == "S") // win
    {
      cout << "Spock smashes Scissors. You win!" << endl;
      return 0;
    }
    if (computer_choice == "R") // win
    {
      cout << "Spock vaporizes Rock. You win!" << endl;
      return 0;
    }
    if (computer_choice == "P") // loss
    {
      cout << "Paper disproves Spock. You Lose..." << endl;
      return 1;
    }
    if (computer_choice == "L") // loss
    {
      cout << "Lizard poisons Spock. You Lose..." << endl;
      return 1;
    } else // tie
    {
      cout << "It's a tie.";
      return 2;
    }
  }
}

int main() {

  int i, a, comp_win, player_win, ties;

  cout << "Are you ready to play 'Rock, Paper, Scissors, Lizard, Spock?'"
       << endl;
  cout << "Enter: \nR for 'Rock' \nP for 'Paper \nS for 'Scissors' \nL for "
          "'Lizard' \nK for 'Spock'";

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

  return 0;
}