#include <iostream>
using namespace std;
//
void print_card(char suit, int rank) {
    const char spades = 6;
    const char hearts = 3;
    const char diamonds = 4;
    const char clubs = 5;

    cout << " " << char(218) << char(196) << char(196) << char(196)
        << char(196) << char(196) << char(196) << char(196)
        << char(191) << endl;//top

    cout << " " << char(179) << " " << " " << " "
        << " " << " " << " " << " "
        << char(179) << endl;//without suit

    
    cout << " " << char(179) << " ";//suit
    switch (suit) {
        case 'S': {
            cout << spades;
        }break;

        case 'H': {
            cout << hearts;
        }break;

        case 'D': {
            cout << diamonds;
        }break;

        case 'C': {
            cout << clubs;
        }break;
        
        default:
            cout << "?";
            break;
    }

    cout << " " << " " << " " << " " << " " << char(179) << endl;//with suit


   

    cout << " " << char(179) << " " << " " << " "
        << " " << " " << " " << " "
        << char(179) << endl;//without suit


    cout << " " << char(179) << " " << " " << " ";//with rank
    if (rank >= 2 && rank < 10) {//rank
        cout << rank;
    }
    else {
        switch (rank) {//rank not number
        case 1:
        {
            cout << "A";
        }break;
        case 10:
        {
            cout << "T"; // T = 10
        }break;
            
        case 11:
        {
            cout << "J";
        }break;

        case 12:
        {
            cout << "Q";
        }break;

        case 13:
        {
            cout << "K";
        }break;

        default:
            cout << "?";
            break;
        }
    }
    cout << " " << " " << " " << char(179) << endl;//with rank

    

    cout << " " << char(179) << " " << " " << " "
        << " " << " " << " " << " "
        << char(179) << endl;//without suit



    cout << " " << char(179) << " " << " " 
        << " " << " " << " ";//with suit
    switch (suit) {
    case 'S': {
        cout << spades;
    }break;

    case 'H': {
        cout << hearts;
    }break;

    case 'D': {
        cout << diamonds;
    }break;

    case 'C': {
        cout << clubs;
    }break;

    default:
        cout << "?";
        break;
    }

    cout << " " << char(179) << endl;//with suit

    cout << " " << char(179) << " " << " " << " "
        << " " << " " << " " << " "
        << char(179) << endl;//without suit

    cout << " " << char(192) << char(196) << char(196) << char(196)
        << char(196) << char(196) << char(196) << char(196)
        << char(217) << endl;//down
}

int main()
{
    char suit_input;
    int rank_input;

    cout << "S - spades" << endl;
    cout << "H - hearts" << endl;
    cout << "D - diamonds" << endl;
    cout << "C - clubs" << endl;

    cout << endl;
    cout << "Enter suit (S, H, D, C): ";
    cin >> suit_input;

    do
    {
        cout << "Enter rank (1-13): ";
        cin >> rank_input;
    } while (rank_input < 1 || rank_input > 13);
    if (rank_input == 10)// T - 10
    {
        cout << "\n T - 10" << endl;
    }
    

    print_card(suit_input, rank_input);

    
   
    cout << "\nThe end" << endl;
	system("pause");
	return 0;
}





