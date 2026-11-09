/* LEVEL_03:0x17A238 -- gathers a record through two helpers using a stack buffer, copies a float field into a global, and finishes with two calls. */

struct Sub {
    char pad_00[0x48];
    float f_48;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern char D_0023B450[];
extern char D_0024FFC0[];

void func_124060(char *a0, struct Obj *a1, char *a2);
void func_04BF88(char *a0, char *a1, char *a2);
void func_019390(int a0);
void func_087C40(int a0);

void func_17A238(struct Obj *a0)
{
    struct Obj *t;
    char loc[16];
    struct Sub *s1;
    float f;
    char *base;

    t = a0;
    base = D_0024FFC0;
    s1 = t->p_58;
    func_124060(loc, t, D_0023B450);
    func_04BF88(base, loc, (char *)s1 + 8);
    f = s1->f_48;
    *(float *)(base + 0x96C) = f;
    func_019390(1);
    func_087C40(2);
}
