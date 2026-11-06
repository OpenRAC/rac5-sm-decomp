extern unsigned int D_002B6E54;

typedef struct Node Node;
typedef struct Obj Obj;

struct Node {
    Node *next;
    Node *prev;
};

struct Obj {
    unsigned int flag;
    unsigned int pad;
    Node *first;
    Node head;
    unsigned int *owner;
    unsigned int count;
};

void func_0A4AB0(Obj *obj);

void func_0A4D88(Obj *obj)
{
    Node *head;
    Node *node;
    Node **link;
    Node *tail;
    unsigned int next;

    head = &obj->head;
    head->prev = head;
    head->next = head;
    if (obj->flag == 0)
        return;
    if (*(void (**)(Obj *))((char *)obj->owner + 0x20) != 0)
        (*(void (**)(Obj *))((char *)obj->owner + 0x20))(obj);
    link = &obj->first;
    while ((node = *link) != 0) {
        next = *(unsigned int *)node;
        *link = (Node *)next;
        node->next = (Node *)D_002B6E54;
        D_002B6E54 = (unsigned int)node;
    }
    tail = &obj->head;
    tail->prev = tail;
    obj->count = 0;
    obj->head.next = tail;
    func_0A4AB0(obj);
}
