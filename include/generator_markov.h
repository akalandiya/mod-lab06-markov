  // Copyright 2022 Irina
#pragma once
#include <string>
#include <deque>
#include <vector>
#include <map>

using namespace std;
class genText {
 public:
    string data;
    string getText();

    vector<string> words;
    typedef deque<string> prefix;  // prefix
    map<prefix, vector<string> > statetab;  // prefix-suffix
    int NPREF;  // kol-vo slov s prefixe
    int MAXGEN;  // max kol-vo texta
    genText(string filename, int i1, int i2);
    genText(map<prefix, vector<string> > presuf,
        vector<string> suf, int i1, int i2);
};
