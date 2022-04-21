  // Copyright 2022 Irina
#include <stdio.h>
#include <string.h>
#include <string>
#include <deque>
#include <vector>
#include <map>
#include <fstream>
#include <iostream>
#include "generator_markov.h"


int main() {
    string line;
    string text = "text.txt";
    genText gn = genText(text, 2, 1000);
    string answer = gn.getText();
    cout << answer;
}
