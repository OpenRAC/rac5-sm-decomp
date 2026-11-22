/* USA LEVEL_08.REL:0x1B1C98, 236-byte candidate (21 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Ent {
    unsigned int *p_00;
    unsigned int w_04;
};

struct P {
    char pad_00[0x104];
    unsigned int w_104;
    char pad_108[0x1DC - 0x108];
    unsigned int ids[1];
};

struct Obj {
    char pad_00[0x46];
    unsigned char b_46;
    char pad_47[0x58 - 0x47];
    struct P *p_58;
    char pad_5c[0x70 - 0x5C];
    float f_70;
};

extern struct Ent D_0026F818[];
extern unsigned int func_189710(unsigned int a);
extern void func_189648(unsigned int a);

void func_1B1C98(struct Obj *o)
{
    struct P *p;
    struct Ent *e;
    unsigned int s;
    unsigned int old;
    unsigned int *id;
    unsigned int idx;
    unsigned int *ids;

    p = o->p_58;
    idx = *(unsigned char *)&p->w_104 - 1;
    e = &D_0026F818[idx];
    ids = p->ids;
    for (s = 0; s < e->w_04; s++) {
        id = &ids[e->p_00[s]];
        old = *id;
        *id = func_189710(old);
        func_189648(old);
    }
    p->w_104 = p->w_104 >> 8;
    o->f_70 = 30.0f;
    if (p->w_104 == 0) {
        o->b_46 = 1;
    } else {
        o->b_46 = 4;
    }
}
