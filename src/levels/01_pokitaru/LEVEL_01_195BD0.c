/* LEVEL_01:0x195BD0 -- unlinks the record's list node from its predecessor and successor and sets a bit in a global 64-bit mask. */
typedef struct Node {
    struct Node *next;
    char pad04[0x10];
    struct Node *prev;
} Node;

typedef struct {
    char pad00[4];
    Node node;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

typedef struct {
    char pad000[0x960];
    unsigned long long mask;
} Globals;

extern Globals D_00235140;

void func_195BD0(Obj *o)
{
    Node *n = &o->rec->node;

    if (n->prev != 0) {
        n->prev->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
    D_00235140.mask = D_00235140.mask | 0x40000000000ULL;
}
