#ifndef DEPT_H
#define DEPT_H


class Dept {
    int size;
    int* scores;

public:
    Dept(int size);
    ~Dept();

    int getSize();
    void read();
    bool isOver60(int index);
};


#endif
