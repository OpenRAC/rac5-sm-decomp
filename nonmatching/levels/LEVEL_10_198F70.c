/* USA LEVEL_10.REL:0x198F70, 188-byte candidate (14 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x88.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Node {
    struct Node *next;
    char pad04[0x10];
    struct Node *back;
} Node;

typedef struct Rec {
    struct Node *next;
    char pad04[0x10];
    struct Node *back;
    char pad18[0x28 - 0x18];
    char *h28;
    char pad2C[0x40 - 0x2C];
    char *h40;
    char *h44;
    char pad48[0x60 - 0x48];
    unsigned char flag;
    char pad61[3];
    char sub[1];
} Rec;

typedef struct Obj {
    char pad00[0x58];
    Rec *rec;
} Obj;

extern void func_07CCA0(char *handle, int flag);
extern void func_108F08(char *record);

void func_198F70(Obj *o)
{
    Rec *r = o->rec;
    char *p;
    int i;

    if (r->back != 0) {
        r->back->next = r->next;
        if (r->next != 0)
            r->next->back = r->back;
        r->back = 0;
    }
    if (r->h28 != 0)
        func_07CCA0(r->h28, 1);
    if (r->h40 != 0)
        func_07CCA0(r->h40, 1);
    if (r->h44 != 0)
        func_07CCA0(r->h44, 1);
    if (r->flag != 0) {
        p = r->sub;
        for (i = 0; i < 2; i++) {
            func_108F08(p);
            p += 0x5C;
        }
    }
}
