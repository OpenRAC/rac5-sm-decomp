/* USA LEVEL_10.REL:0x1BDAE8 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0B7928 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Link;

typedef struct {
    char pad00[4];
    Link *w4;
    Link *w8;
    char *wC;
} Parent;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Parent *parent;
    char pad58[0x64 - 0x58];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    float timer;
} Obj;

typedef struct {
    char pad00[0x30];
    float pos[3];
} Globals;

extern Globals D_0023E540;

extern int func_084D08(void *a, float *p);
extern void func_07CCA0(Obj *o, int mode);
extern void func_0B7928(int first, unsigned char second, float f);

void func_1BDAE8(Obj *o)
{
    Parent *p;
    Globals *g;

    p = o->parent;
    if (o->state == 0) {
        if ((o->flags & 0x200000) == 0) {
            if (p->wC != 0) {
                g = &D_0023E540;
                if (func_084D08(p->wC, g->pos) != 0) {
                    o->flags |= 0x200000;
                }
            }
        }
        if ((o->flags & 0x200000) != 0) {
            if (p->w4 != 0) {
                p->w4->flags |= 0x200000;
            }
            o->state = 1;
        }
    }
    if (o->state == 1) {
        o->timer -= 1.0f;
        if (o->timer <= 0.0f) {
            if (p->w8 != 0) {
                p->w8->flags |= 0x200000;
            }
            func_07CCA0(o, 1);
        } else {
            func_0B7928(0x2BD, 0x5A, o->timer * 0.03333333507180214f);
        }
    }
}
