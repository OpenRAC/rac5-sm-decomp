/* LEVEL_07:0x187228 -- placement copy of LEVEL_03_17A238.c: gathers a record through two helpers using a stack buffer, copies a float field into a global, and finishes with two calls. */

struct Sub {
    char pad_00[0x48];
    float f_48;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern char D_002376E0[];
extern char D_0024AA40[];

void func_128E80(char *a0, struct Obj *a1, char *a2);
void func_04E2F8(char *a0, char *a1, char *a2);
void func_019CF0(int a0);
void func_089EB8(int a0);

void func_187228(struct Obj *a0)
{
    struct Obj *t;
    char loc[16];
    struct Sub *s1;
    float f;
    char *base;

    t = a0;
    base = D_0024AA40;
    s1 = t->p_58;
    func_128E80(loc, t, D_002376E0);
    func_04E2F8(base, loc, (char *)s1 + 8);
    f = s1->f_48;
    *(float *)(base + 0x96C) = f;
    func_019CF0(1);
    func_089EB8(2);
}
