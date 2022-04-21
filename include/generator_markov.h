  // Copyright 2022 Irina
#pragma once
#include <string>
#include <deque>
#include <vector>
#include <map>

//using namespace std;
class genText {
 public:
    std::string data;
    std::string getText();

    std::vector<std::string> words;
    typedef std::deque<std::string> prefix;  // prefix
    std::map<prefix, std::vector<std::string> > statetab;  // prefix-suffix
    int NPREF;  // kol-vo slov s prefixe
    int MAXGEN;  // max kol-vo texta
    genText(std::string filename, int i1, int i2);
    genText(std::map<prefix, std::vector<std::string> > presuf,
        std::vector<std::string> suf, int i1, int i2);
};
