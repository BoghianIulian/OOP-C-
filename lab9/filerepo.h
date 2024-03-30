//
// Created by Iulian on 5/11/2023.
//

#ifndef LAB9_FILEREPO_H
#define LAB9_FILEREPO_H
#include "repo.h"
#include <fstream>
#include <vector>
using namespace std;
class FileRepo : public Repo
{
private:
    string filename;
    vector<Car> prods;
    void save();
public:
    explicit FileRepo(string);
    void add_car(Car&);
    void remove_car(Car&);
    void update_car(Car& , Car&);
    Car * get_all();
    int get_size();
    void loadFromFile();
};
#endif //LAB9_FILEREPO_H
