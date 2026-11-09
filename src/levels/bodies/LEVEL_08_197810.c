/* LEVEL_08:0x197810 -- placement copy of LEVEL_03_17A238.c: gathers a record through two helpers using a stack buffer, copies a float field into a global, and finishes with two calls. */

struct Sub {
    char pad_00[0x48];
    float f_48;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern char D_0026D4C0[];
extern char D_002843D0[];

void func_137108(char *a0, struct Obj *a1, char *a2);
void func_052E30(char *a0, char *a1, char *a2);
void func_019F70(int a0);
void func_08FE38(int a0);

void func_197810(struct Obj *a0)
{
    struct Obj *t;
    char loc[16];
    struct Sub *s1;
    float f;
    char *base;

    t = a0;
    base = D_002843D0;
    s1 = t->p_58;
    func_137108(loc, t, D_0026D4C0);
    func_052E30(base, loc, (char *)s1 + 8);
    f = s1->f_48;
    *(float *)(base + 0x96C) = f;
    func_019F70(1);
    func_08FE38(2);
}
