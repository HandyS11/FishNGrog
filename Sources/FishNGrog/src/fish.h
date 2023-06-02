#ifndef FISH_H
#define FISH_H

#include <iostream>

using namespace std;

enum Type { Splashtails, Pondies, Islehoppers, Ancientscales, Plentifins,
            Wildsplashed, Devilfish, Battlegills, Wreckers, Stormfish };
enum Quality { Base, Common, Uncommon, Rare, Night };
enum Cookness { Raw, Undercooked, Cooked, Burn };
enum Bait { None, Leeches, Earthworms, Grubs };
enum Location { Everywhere, Lakes, Isles_Islands, South, The_Shores_of_Plenty,
                The_Wilds, The_Devils_Roar, Forteress, Shipwrecks, Storms};

class Fish
{
private:
    string m_name;
    bool m_isTrophy;
    int m_price;
    Type m_type;
    Quality m_quality;
    Cookness m_cookness;
    Bait m_bait;
    Location m_location;
public:
    Fish(const string& name, const bool& isTrophy, const int& price,
         const Type& type, const Quality& quality, const Cookness& cookness,
         const Bait& bait, const Location& location);
};

#endif // FISH_H
