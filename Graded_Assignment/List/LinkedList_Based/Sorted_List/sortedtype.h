#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

template <class T>
class SortedType {
    struct NodeType {
        T info;
        NodeType* next;
    };

public:
    SortedType();
    ~SortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(T&, bool&);
    void InsertItem(T);
    void DeleteItem(T);
    void ResetList();
    void GetNextItem(T&);

private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // SORTEDTYPE_H_INCLUDED
