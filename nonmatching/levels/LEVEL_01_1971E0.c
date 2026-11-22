/* USA LEVEL_01.REL:0x1971E0 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_197090.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Item Item;
typedef int (*Handler)(float scale, Item *item, int a, int b, int c, int d, void *skip);

typedef struct Cls {
    char pad_00[0x20];
    Handler handler;
} Cls;

typedef struct Link {
    int first;
} Link;

struct Item {
    char pad_00[0x40];
    Cls *cls;
    char pad_44[0x14];
    Link *link;
};

typedef struct Own {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x1C];
    Link *link;
} Own;

typedef struct Row {
    int mode;
    float scale;
    int a;
    int b;
} Row;

typedef struct Gl {
    char pad_00[0x530];
    Row row;
} Gl;

extern Gl D_00218D58;

extern unsigned int func_01C3E8(Item **buf, int cap, float *pos, int p6, int p7, int p8, int one);
extern float func_193920(Item *item);
extern int func_015E60(Item *item);
extern int func_03C370(int first, void *skip);
extern void func_015D88(int a, int b, Item *item, int result);
extern void func_1DA560(Own *o, Item *item, int a, int b);

void func_1971E0(Own *o)
{
    Item *buf[32];
    unsigned int n;
    unsigned int i;
    Item *it;
    Cls *cls;
    Row *r;
    Gl *g;
    float scale;
    float none;
    int result;

    n = func_01C3E8(buf, 0x20, o->pos, 0x129, 0x101, 2, 1);
    for (i = 0; i < n; i++) {
        none = -1.0f;
        g = &D_00218D58;
        it = buf[i];
        if (func_193920(it) != none) {
            if (func_015E60(it) == 0 || func_03C370(it->link->first, o) != 0) {
                cls = it->cls;
                if (cls->handler == 0) {
                    result = -1;
                } else {
                    r = &g->row;
                    if (r->mode < 0) {
                        scale = r->scale;
                    } else if (r->mode < 2) {
                        scale = r->scale;
                    } else if (r->mode == 2) {
                        scale = r->scale * 0.5f;
                    } else {
                        scale = r->scale;
                    }
                    result = cls->handler(scale, it, r->a, r->b, 0, 0, o);
                }
                func_015D88(*(int *)o->link, 0xD, it, result);
                if (result) {
                    func_1DA560(o, it, 1, 0);
                }
            }
        }
    }
}
