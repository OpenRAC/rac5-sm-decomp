/* USA LEVEL_01.REL:0x07CD28, 272-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char *entries;
    char pad04[4];
    unsigned char count;
} Set;

typedef struct {
    char pad00[8];
    Set *set;
    char pad0C[0x34 - 0xC];
} Rec;

typedef struct {
    char pad00[4];
    Rec *recs;
} Tab;

typedef struct {
    char pad00[8];
    float f08;
} Node;

typedef struct {
    char pad00[0x40];
    Tab *tab;
    unsigned char idx;
    char pad45[3];
    Node *node;
    char pad4C[0x18];
    unsigned int pad64lo : 8;
    unsigned int toggle : 1;
} Obj;

extern void func_082758(Obj *o);
extern void func_088CA0(Node *n, char *dst, char *src, int a, int b, int c, int d, float x, float y);

void func_07CD28(Obj *o, unsigned int idx, int a, int b, float x, float y)
{
    Set *s;

    s = o->tab->recs[o->idx].set;
    if (idx < s->count) {
        func_082758(o);
        o->toggle = !o->toggle;
        func_088CA0(o->node, (char *)o->node + 0x5C + o->toggle * 0x28, s->entries + idx * 64, a, b, 0, 0, x, y);
        o->node->f08 = 1.0f;
    }
}
