/* LEVEL_18:0x14A960 -- placement copy of LEVEL_01_16DFD8.c: steps through a ring of slots eight times, nudging each slot's object upward, and reports the final slot's flag byte. */

struct Vt16DFD8 {
    char pad_00[0x28];
    void (*fn_28)(void *o);
};

struct Cls16DFD8 {
    char pad_00[0x10];
    struct Vt16DFD8 *vt_10;
};

struct Obj16DFD8 {
    char pad_00[0x30];
    float p[3];
    char pad_3C[4];
    struct Cls16DFD8 *cls_40;
};

struct Ent16DFD8 {
    struct Obj16DFD8 *obj_00;
    char pad_04[0xC];
    float h_10;
};

struct Slot16DFD8 {
    struct Ent16DFD8 *ent_00;
    char pad_04[0x18];
    unsigned char b_1C;
    char pad_1D[3];
};

extern int D_001B5D2C;

int func_0F2FC8(float *v, int g, float h);

static __inline__ void vcopy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_14A960(struct Slot16DFD8 *tbl, unsigned int n, unsigned char *out, int start)
{
    float v[3];
    struct Ent16DFD8 *e;
    struct Obj16DFD8 *o;
    float *p;
    float h;
    unsigned char idx;
    unsigned int i;

    idx = start;
    idx = idx % n;
    i = 0;
    do {
        e = tbl[idx].ent_00;
        o = e->obj_00;
        h = e->h_10;
        p = o->p;
        vcopy(v, p);
        v[1] += h;
        if (func_0F2FC8(v, D_001B5D2C, h) != 0) {
            vcopy(p, v);
            p[1] -= h;
            if (o->cls_40->vt_10->fn_28 != 0) {
                o->cls_40->vt_10->fn_28(o);
            }
        }
        idx = (idx + 1) % n;
        i++;
    } while (i < 8);
    *out = tbl[idx].b_1C;
}
