#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template<class something>
class dynArr{

private:
    something *data;
    int siz;

public:
    dynArr(int);
    ~dynArr();
    void setValue(int, something);
    something getValue(int);
};

#endif // DYNARR_H_INCLUDED
