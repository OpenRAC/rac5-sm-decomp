/* USA LEVEL_10.REL:0x19AA38, 280-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 4 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Item {
    unsigned char id;
    char pad_01[3];
    float weight;
} Item;

typedef struct Ext {
    unsigned char first;
    char pad_01[0x1B];
    int kind;
} Ext;

typedef struct Obj {
    char pad_00[0x58];
    Ext *ext;
} Obj;

extern Item D_0022DCB8[];
extern Item D_0022DCD0[];

extern int rand(void);
extern void func_199540(Obj *o, int id);

void func_19AA38(Obj *o)
{
    Item *t;
    Item *p;
    float *w;
    float total;
    float target;

    if (o->ext->kind == 5) {
        t = D_0022DCD0;
    } else {
        t = D_0022DCB8;
    }
    total = 0.0f;
    if (0.0f <= t->weight) {
        w = &t->weight;
        do {
            total += *w;
            w += 2;
        } while (0.0f <= *w);
    }
    target = total * ((float)rand() * 4.656612873077393e-10f);
    if (0.0f <= t->weight) {
        w = &t->weight;
        p = t;
        do {
            if (target <= *w) {
                func_199540(o, p->id);
                return;
            }
            target -= *w;
            w += 2;
            p++;
        } while (0.0f <= *w);
    }
}
