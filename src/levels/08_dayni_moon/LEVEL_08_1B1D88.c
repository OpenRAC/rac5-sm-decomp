/* LEVEL_08:0x1B1D88 -- walks a per-state id list and forwards table entries, then sets a state byte and a timer. */
struct Ent {
    unsigned int *p_00;
    unsigned int w_04;
};

struct P {
    char pad_00[0x104];
    unsigned char b_104;
    char pad_105[0x1DC - 0x105];
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
extern void func_189638(unsigned int a);

void func_1B1D88(struct Obj *o)
{
    struct P *p;
    struct Ent *e;
    unsigned int s;
    unsigned int idx;

    p = o->p_58;
    idx = p->b_104 - 1;
    e = &D_0026F818[idx];
    for (s = 0; s < e->w_04; s++) {
        func_189638(p->ids[e->p_00[s]]);
    }
    o->b_46 = 2;
    o->f_70 = 22.0f;
}
