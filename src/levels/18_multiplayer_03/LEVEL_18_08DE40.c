extern unsigned int D_0025451C;

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

void func_08DB98(Obj *obj);

void func_08DE40(Obj *obj)
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
        node->next = (Node *)D_0025451C;
        D_0025451C = (unsigned int)node;
    }
    tail = &obj->head;
    tail->prev = tail;
    obj->count = 0;
    obj->head.next = tail;
    func_08DB98(obj);
}
