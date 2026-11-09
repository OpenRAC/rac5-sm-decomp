/* LEVEL_15.REL:0x0F5068: reviewed 316-byte candidate, held for ABI review.
 * Finds the table record tagged with the magic id, validates its slot list and
 * publishes the tallest slot value.
 * gnu-ee-trial C with gnu-ee-trial links 316/316 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_132430 returning void with (int), but the accepted
 * LEVEL_15_132430.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Slot {
    char pad0[4];
    char *obj;
    char pad1[0x14 - 8];
    int f14;
    char pad2[0x34 - 0x18];
};

struct Rec {
    char pad0[4];
    struct Slot *slots;
    char pad1[0x24 - 8];
    unsigned int magic;
    char pad2[0x3C - 0x28];
    unsigned char type;
    char pad3[0x44 - 0x3D];
};

struct ObjRef {
    char *obj;
    char pad0[0x34 - 4];
};

struct Table {
    char pad0[0x34];
    struct Rec *recs;
    unsigned int count;
};

extern struct Table *D_0015B710;
extern struct Slot *D_002A8B58;
extern void func_132430(int x);
extern int func_029498(char *obj);
extern void func_13AED8(int a, int b);

static __inline__ struct Rec *FindRec(struct Table *t, unsigned int id)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->recs[i].magic == id) {
            return &t->recs[i];
        }
    }
    return 0;
}

int func_0F5068(void)
{
    struct Rec *r;
    struct Slot *slots;
    struct Slot *s;
    struct ObjRef *pp;
    char *obj;
    int max;
    int v;
    int k;

    r = FindRec(D_0015B710, 0xD32B703A);
    slots = r->slots;
    if (r->type != 0x17) {
        return 0;
    }
    for (s = slots; s != slots + 23; s++) {
        if (s->obj == 0) {
            return 0;
        }
        if (s->f14 != 0) {
            func_132430(s->f14);
        }
    }
    D_002A8B58 = r->slots;
    max = 0;
    pp = (struct ObjRef *)((char *)slots + 4);
    for (k = 22; k >= 0; k--) {
        obj = pp->obj;
        if (func_029498(obj)) {
            v = *(int *)(*(char **)(obj + 0x20) + 4);
        } else {
            v = 0;
        }
        if (v >= max) {
            max = v;
        }
        pp++;
    }
    func_13AED8(0x40, max);
    return 1;
}
