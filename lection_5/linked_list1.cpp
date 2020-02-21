#include <iostream>
#include <string>

typedef std::string DataType;

struct tNode{
    DataType data;
    tNode* next;
};

tNode * insert_node(tNode *p_begin, DataType data);

int main()
{
    tNode *p_begin = nullptr;
    p_begin = insert_node(p_begin, "Hello");
    p_begin = insert_node(p_begin, "World");
    p_begin = insert_node(p_begin, "First");

    tNode *p = p_begin;
    while (p) {
        std::cout << p->data << std::endl;
        p = p->next;
    }

    return 0;
}

tNode * insert_node(tNode *p_begin, DataType data)
{
    tNode *p = new tNode;
    p->data = data;
    p->next = p_begin;
    return p;
}
