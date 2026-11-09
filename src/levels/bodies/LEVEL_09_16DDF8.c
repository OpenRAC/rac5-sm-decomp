/* LEVEL_09:0x16DDF8 -- placement copy of LEVEL_03_17A238.c: gathers a record through two helpers using a stack buffer, copies a float field into a global, and finishes with two calls. */

struct Sub {
    char pad_00[0x48];
    float f_48;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern char D_0020AA60[];
extern char D_0021C8C0[];

void func_11EF40(char *a0, struct Obj *a1, char *a2);
void func_04A208(char *a0, char *a1, char *a2);
void func_0189F0(int a0);
void func_0847A0(int a0);

void func_16DDF8(struct Obj *a0)
{
    struct Obj *t;
    char loc[16];
    struct Sub *s1;
    float f;
    char *base;

    t = a0;
    base = D_0021C8C0;
    s1 = t->p_58;
    func_11EF40(loc, t, D_0020AA60);
    func_04A208(base, loc, (char *)s1 + 8);
    f = s1->f_48;
    *(float *)(base + 0x96C) = f;
    func_0189F0(1);
    func_0847A0(2);
}
