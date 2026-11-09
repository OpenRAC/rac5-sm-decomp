/* LEVEL_06:0x16A1C0 -- placement copy of LEVEL_03_17A238.c: gathers a record through two helpers using a stack buffer, copies a float field into a global, and finishes with two calls. */

struct Sub {
    char pad_00[0x48];
    float f_48;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern char D_0020F9D8[];
extern char D_00221EC0[];

void func_11C388(char *a0, struct Obj *a1, char *a2);
void func_04A420(char *a0, char *a1, char *a2);
void func_017E30(int a0);
void func_080C60(int a0);

void func_16A1C0(struct Obj *a0)
{
    struct Obj *t;
    char loc[16];
    struct Sub *s1;
    float f;
    char *base;

    t = a0;
    base = D_00221EC0;
    s1 = t->p_58;
    func_11C388(loc, t, D_0020F9D8);
    func_04A420(base, loc, (char *)s1 + 8);
    f = s1->f_48;
    *(float *)(base + 0x96C) = f;
    func_017E30(1);
    func_080C60(2);
}
