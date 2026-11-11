/* LEVEL_08:0x20FEF8 -- walks an intrusive list for the entry whose four values match the given targets. */
struct Node {
    struct Node *prev;
    struct Node *next;
};
struct Elem {
    float x;
    char pad[0x24];
};
struct Obj {
    char pad0[8];
    float f8;
    char padC[0xB4];
    int idx;
    char padC4[0xC];
    float fD0;
    struct Node node;
};

static inline int Near(float a, float b, float e)
{
    return __builtin_fabsf(a - b) < e;
}

struct Obj *func_20FEF8(struct Node *head, float a, float b, float c, float d)
{
    struct Node *n;
    struct Obj *o;
    struct Elem *arr;
    float v0, v1, v2, v3;
    struct Elem *e0, *e1;

    for (n = head->next; n != head; n = n->next) {
        o = (struct Obj *)((char *)n - 0xD4);
        arr = (struct Elem *)((char *)n - 0x70);
        e0 = &arr[o->idx];
        e1 = &arr[o->idx ^ 1];
        v0 = e0->x;
        v1 = o->fD0;
        v2 = e1->x;
        v3 = o->f8;
        if ((unsigned char)Near(v0, c, 0.05f) && (unsigned char)Near(v1, d, 0.01f) && (unsigned char)Near(v2, a, 0.05f) && (unsigned char)Near(v3, b, 0.01f)) {
            return o;
        }
    }
    return 0;
}
