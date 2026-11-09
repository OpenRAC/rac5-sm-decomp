/* LEVEL_24:0x1602E8 -- placement copy of LEVEL_03_17A238.c: gathers a record through two helpers using a stack buffer, copies a float field into a global, and finishes with two calls. */

struct Sub {
    char pad_00[0x48];
    float f_48;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern char D_001F06E8[];
extern char D_00201040[];

void func_11BA10(char *a0, struct Obj *a1, char *a2);
void func_046CB0(char *a0, char *a1, char *a2);
void func_017D50(int a0);
void func_081088(int a0);

void func_1602E8(struct Obj *a0)
{
    struct Obj *t;
    char loc[16];
    struct Sub *s1;
    float f;
    char *base;

    t = a0;
    base = D_00201040;
    s1 = t->p_58;
    func_11BA10(loc, t, D_001F06E8);
    func_046CB0(base, loc, (char *)s1 + 8);
    f = s1->f_48;
    *(float *)(base + 0x96C) = f;
    func_017D50(1);
    func_081088(2);
}
