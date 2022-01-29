


#ifndef HDR_tlStringEx
#define HDR_tlStringEx

#include "tlString.h"

#include <set>
#include <map>
#include <vector>
#include <list>
#include <unordered_set>
#include <unordered_map>

namespace tl
{

template <class Iter>
std::string to_string (Iter b, Iter e)
{
  std::string res;
  for (Iter i = b; i != e; ++i) {
    if (i != b) {
      res += ",";
    }
    res += tl::to_string (*i);
  }
  return res;
}

template <class T1, class T2>
std::string to_string (const std::pair<T1, T2> &p)
{
  return to_string (p.first) + "," + to_string (p.second);
}

template <class T>
std::string to_string (const std::vector<T> &v)
{
  return to_string (v.begin (), v.end ());
}

template <class T>
std::string to_string (const std::list<T> &v)
{
  return to_string (v.begin (), v.end ());
}

template <class T>
std::string to_string (const std::set<T> &v)
{
  return to_string (v.begin (), v.end ());
}

template <class T, class V>
std::string to_string (const std::map<T, V> &v)
{
  return to_string (v.begin (), v.end ());
}

template <class T>
std::string to_string (const std::unordered_set<T> &v)
{
  return to_string (v.begin (), v.end ());
}

template <class T, class V>
std::string to_string (const std::unordered_map<T, V> &v)
{
  return to_string (v.begin (), v.end ());
}

}

#endif
