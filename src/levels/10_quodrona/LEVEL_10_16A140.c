/* LEVEL_10:0x16A140 -- placement copy of LEVEL_01_16CA18.c: marks one entry flag, bumps a small counter, and conditionally runs a helper on the entry. */
typedef struct {
    char pad_00[0x15];
    unsigned char f_15;
} Sub;

typedef struct {
    char pad_00[0x18];
    unsigned char f_18;
    char pad_19[3];
} Entry;

typedef struct {
    char pad_00[0x158];
    unsigned char f_158;
} Ctx;

typedef struct {
    char pad_00[0x54];
    Sub *f_54;
    Ctx *f_58;
} Obj;

extern void func_16C9F8(long long first, long long second);

void func_16A140(Obj *a0, int a1)
{
    Ctx *c;
    Entry *e;
    Sub *t;
    unsigned char v;

    t = a0->f_54;
    c = a0->f_58;
    e = (Entry *)((char *)c + a1 * 28);
    v = e->f_18;
    if ((v & 1) == 0) {
        e->f_18 = v | 1;
        c->f_158 = c->f_158 + 1;
        if (t->f_15 >= c->f_158) {
            e->f_18 = e->f_18 | 2;
            func_16C9F8((long long)c, (long long)t);
        }
    }
}
