#include "fish.h"

Fish::Fish(const string& name, const bool& isTrophy, const int& price,
           const Type& type, const Quality& quality,
           const Cookness& cookness, const Bait& bait,
           const Location& location)
    : m_name(name),
      m_isTrophy(isTrophy),
      m_price(price),
      m_type(type),
      m_quality(quality),
      m_cookness(cookness),
      m_bait(bait),
      m_location(location)
{ }
