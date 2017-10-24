// Подключаемый модуль

template<typename DataType>
struct tNode{
    DataType data;
    tNode* next;
};


template<s
void list_init(List<T>);

void list_insert(List<T>, const T &value);

void list_print(List<T>);

void list_destroy(List<T>);


template<typename DataType>
tNode<DataType> * insert_node(tNode<DataType> *p_begin, DataType data)
{
    tNode<DataType> *p = new tNode<DataType>;
    p->data = data;
    p->next = p_begin;
    return p;
}

