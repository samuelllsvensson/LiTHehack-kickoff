#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;


//Do not edit
struct Hacker
{
	Hacker(string fN, string lN) : firstName{fN}, lastName{lN} {}
    string firstName;
    string lastName;
};

//Do not edit
struct LiTHehack
{
    vector<Hacker> members{ Hacker("adrian", "andersson"),
    						Hacker("samuel", "svensson"),
							Hacker("johan", "linder"),
    					    Hacker("emma", "segolsson"),
    					    Hacker("henrik", "rosander"),
    					    Hacker("wilma", "axelsson"),
    					    Hacker("josefine",  "klintberg"),
    					    Hacker("jacob", "molin")};
    LiTHehack() = default;

    void sortByLastName();
    void sortByFirstName();
    void capitalizeNames();
	
    friend ostream& operator<<(std::ostream& os, const LiTHehack& L);

};

bool compareByLastName(const Hacker& hacker1, const Hacker& hacker2)
{
	// Remove this
    return true;
}
bool compareByFirstName(const Hacker& hacker1, const Hacker& hacker2)
{
    // Remove this
    return true;
}

// 1 point
void LiTHehack::sortByLastName()
{
	// Sort every members last name alphabetically using the comparator compareByLastName (1 point)
	// Tip: std::sort()
}
void LiTHehack::sortByFirstName()
{
    // Sort every member's first name by reversed alphabetical order (1 point)
    // Tip: Create a new comparator! 
}

// 2 points
void LiTHehack::capitalizeNames()
{
	// Capitalize the first letter in each members first and last name
    std::for_each(members.begin(), members.end(), []( Hacker& h) {
    	// Loop through each Hackers firstName and capitalize each char c
        
        // Loop through each Hackers lastName and capitalize each char c
       
    });
}

// 1 point
ostream& operator<<(ostream& os, const LiTHehack& L) {

    os << "LiTHehack 19/20 consists of: " << endl;

    for(Hacker h : L.members) {
    	// Display each member's first name and last name with suitable spacing
        
	}

    return os;
}

// Do not edit
int main()
{
    LiTHehack kickoff;
    cout << "SORTING BY LAST NAME ALPHABETICALLY" << endl;
    kickoff.sortByLastName();
    cout << kickoff << endl;

    cout << "SORTING BY FIRST NAME ALPHABETICALLY" << endl;
    kickoff.sortByFirstName();
    cout << kickoff << endl;

    cout << "CAPITALIZING NAMES" << endl;
    kickoff.capitalizeNames();
    cout << kickoff << endl;
    
    return 0;
}