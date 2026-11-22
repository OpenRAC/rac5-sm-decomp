/* USA LEVEL_03.REL:0x189A58, 400-byte candidate (21 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Hook {
    char pad_00[0x28];
    void (*run)(struct Node *n);
} Hook;

typedef struct Cls {
    char pad_00[0x10];
    Hook *hook;
} Cls;

typedef struct Node {
    char pad_00[0x34];
    float timer;
    char pad_38[8];
    Cls *cls;
    char pad_44[0x20];
    unsigned int flags;
} Node;

typedef struct Rec {
    int w0;
    float f4;
    Node *first;
    int pad_0C;
    Node *nodes[10];
} Rec;

typedef struct Obj {
    char pad_00[0x46];
    unsigned char b46;
    char pad_47[0xD];
    Rec *rec;
} Obj;

extern int D_0021F414;
extern int func_0272E8(int a, int b);
extern void func_155020(int a, int b);

static __inline__ int Resolve(Node **slot)
{
    Node *t;

    if (*slot == 0) {
        return 0;
    }
    t = (Node *)(D_0021F414 + (int)*slot);
    if (*(int *)((char *)t + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = t;
    return 1;
}

int func_189A58(Obj *o)
{
    Rec *r;
    int flag;
    unsigned int i;
    Node **p;

    r = o->rec;
    if (!Resolve(&r->first)) {
        func_155020(0x2D, 1);
        return 0;
    }
    flag = func_0272E8(0x2D, 1) != 0;
    p = r->nodes;
    for (i = 0; i < 10; i++, p++) {
        if (!Resolve(p)) {
            return 0;
        }
        if (flag) {
            (*p)->timer += 10.0f;
            if ((*p)->cls->hook->run != 0) {
                (*p)->cls->hook->run(*p);
            }
        } else {
            (*p)->flags |= 0x20;
            (*p)->flags |= 0x10;
        }
    }
    if (flag) {
        func_155020((int)r->first, 1);
        return 0;
    }
    r->w0 = 0;
    r->f4 = 0.033333335f;
    o->b46 = 0;
    return 1;
}
