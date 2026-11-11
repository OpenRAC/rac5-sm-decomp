/* LEVEL_02:0x16A7A0 -- calls a helper that fills a small result record, then stores a pointer and float into a sub-object. */

struct Obj16A7A0 {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x0E];
    char *p_54;
    char *p_58;
};

struct Out16A7A0 {
    char pad_00[0x10];
    char *p_10;
    int i_14;
};

extern char D_00234A60[];
unsigned int func_034100(char *a, struct Obj16A7A0 *b, char *c, int d, struct Out16A7A0 *e);
void func_1698B8(struct Obj16A7A0 *o, int a, int b);

void func_16A7A0(struct Obj16A7A0 *o)
{
    struct Out16A7A0 out;
    unsigned int r;
    char *q;
    char *p;

    r = func_034100(o->p_54 + 0x20, o, D_00234A60, 0, &out);
    q = o->p_58;
    if (r < 3) {
        if (out.i_14 == 2) {
            p = out.p_10;
            *(char **)(q + 0x54) = p;
            *(float *)(q + 0x58) = *(float *)(p + 0x34);
        } else {
            *(char **)(q + 0x54) = 0;
        }
    } else {
        *(char **)(q + 0x54) = 0;
    }
    if (r == 0) {
        func_1698B8(o, o->b_45, 0x12);
    }
}
