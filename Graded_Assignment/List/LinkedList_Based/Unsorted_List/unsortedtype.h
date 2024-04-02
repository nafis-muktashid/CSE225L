#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

template <class T>
class UnsortedType{
    struct NodeType{
        T info;
        NodeType* next;
    };

public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(T& , bool&);
    void InsertItem(T);
    void DeleteItem(T);
    void ResetList();
    void GetNextItem(T&);

private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
