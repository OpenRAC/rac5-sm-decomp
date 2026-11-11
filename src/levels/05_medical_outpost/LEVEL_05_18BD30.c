/* LEVEL_05:0x18BD30 -- state-1 handler: unlinks the nested node from its list when the record allows it, marks the object and returns 3. */
typedef struct Node Node;

struct Node {
    Node *next;
    char pad04[0x10];
    Node *prev;
};

typedef struct {
    char pad00[0x2C];
    unsigned char b2C;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    unsigned char b46;
    char pad47[0xD];
    Rec *rec;
    Node *nested;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    int f70;
} Obj;

int func_18BD30(Obj *o)
{
    Rec *rec = o->rec;
    Node *n = o->nested;

    if (o->state != 1) {
        return 0;
    }
    if (rec->b2C != 0) {
        if (n->prev != 0) {
            n->prev->next = n->next;
            if (n->next != 0) {
                n->next->prev = n->prev;
            }
            n->prev = 0;
        }
    }
    o->flags |= 0x200000;
    o->b46 = 2;
    o->f70 = 0;
    return 3;
}
