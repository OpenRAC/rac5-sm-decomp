/* LEVEL_02:0x16BFD8 -- clears a slot table and a flag pair, then notifies entries whose tag byte is 2. */
struct Slot {
    void *p_00;
    int w_04;
    char pad_08[0x10];
    unsigned char b_18;
    char pad_19[2];
    unsigned char b_1b;
};

struct Elem {
    char pad_00[0x45];
    unsigned char b_45;
};

struct P {
    struct Slot slot[8];
    char pad_e0[0x10A - 0xE0];
    unsigned char b_10a;
    unsigned char b_10b;
    char pad_10c[0x170 - 0x10C];
    struct Elem *arr_170[6];
};

struct Obj {
    char pad_00[0x46];
    unsigned char b_46;
    char pad_47[0x54 - 0x47];
    struct P *p_54;
};

extern void func_0890A8(void *e);

void func_16BFD8(struct Obj *o)
{
    struct P *p;
    struct Slot *s;
    struct Elem *e;
    unsigned int i;
    struct Elem **ap;

    p = o->p_54;
    o->b_46 = 0;
    p->b_10a = 0;
    p->b_10b = 0;
    s = p->slot;
    do {
        if (s->p_00 != 0) {
            e = s->p_00;
            s->p_00 = 0;
            s->b_1b = 0;
            s->b_18 = 0;
            s->w_04 = 0;
            func_0890A8(e);
        }
        s++;
    } while (s < p->slot + 8);
    i = 0;
    ap = p->arr_170;
    do {
        e = *ap;
        ap++;
        i++;
        if (e->b_45 == 2) {
            func_0890A8(e);
        }
    } while (i < 6);
}
