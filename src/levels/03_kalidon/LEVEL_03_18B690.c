/* LEVEL_03:0x18B690 -- stops and clears the sound handle of the object's first record, then unlinks the second record from its list neighbours. */
typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *back;
} Node;

typedef struct Snd {
    char pad0[0x1C];
    char *handle;
} Snd;

typedef struct Obj {
    char pad0[0x54];
    Snd *snd;
    Node *node;
} Obj;

extern void func_080918(char *record);

void func_18B690(Obj *o)
{
    Snd *s = o->snd;
    Node *n = o->node;

    if (s->handle != 0) {
        func_080918(s->handle);
        s->handle = 0;
    }
    if (n->back != 0) {
        n->back->next = n->next;
        if (n->next != 0)
            n->next->back = n->back;
        n->back = 0;
    }
}
