#include "stub.h"

list<Fish> Stub::loadFish() const {
    list<Fish> fishList;

    fishList.push_back(Fish(QString("Umber Splashtail"), true, 1270, Splashtails, Rare, Undercooked, None, Everywhere));
    fishList.push_back(Fish(QString("Sunny Splashtail"), false, 35, Splashtails, Common, Undercooked, None, Everywhere));
    fishList.push_back(Fish(QString("Charcoal Pondie"), false, 115, Pondies, Base, Cooked, None, Everywhere));
    fishList.push_back(Fish(QString("Amethyst Islehopper"), true, 2625, Islehoppers, Night, Raw, None, Shipwrecks));
    fishList.push_back(Fish(QString("Smoke Ancienscale"), false, 565, Ancientscales, Uncommon, Cooked, Leeches, The_Ancient_Isles));
    fishList.push_back(Fish(QString("Olive Plentifin"), true, 850, Plentifins, Base, Cooked, Earthworms, The_Shores_of_Plenty));
    fishList.push_back(Fish(QString("Watery Plentify"), false, 300, Plentifins, Night, Raw, Earthworms, The_Shores_of_Plenty));
    fishList.push_back(Fish(QString("Sandy Wildsplash"), false, 70, Wildsplashed, Common, Burnt, Earthworms, The_Wilds));
    fishList.push_back(Fish(QString("Forsaken Devilfish"), true, 11250, Devilfish, Rare, Cooked, Grubs, The_Devils_Roar));
    fishList.push_back(Fish(QString("Run Battlegill"), false, 525, Battlegills, Uncommon, Raw, Grubs, South));
    fishList.push_back(Fish(QString("Snow Wrecker"), true, 14065, Wreckers, Rare, Cooked, Earthworms, Storms));
    fishList.push_back(Fish(QString("Shores Stormfish"), false, 450, Stormfish, Common, Raw, Leeches, Storms));

    return fishList;
}
