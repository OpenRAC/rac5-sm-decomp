/* LEVEL_10:0x17C7F0 -- placement copy of LEVEL_03_17A238.c: gathers a record through two helpers using a stack buffer, copies a float field into a global, and finishes with two calls. */

struct Sub {
    char pad_00[0x48];
    float f_48;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern char D_0022AFC0[];
extern char D_0023E540[];

void func_123D68(char *a0, struct Obj *a1, char *a2);
void func_04C3D0(char *a0, char *a1, char *a2);
void func_018C18(int a0);
void func_088150(int a0);

void func_17C7F0(struct Obj *a0)
{
    struct Obj *t;
    char loc[16];
    struct Sub *s1;
    float f;
    char *base;

    t = a0;
    base = D_0023E540;
    s1 = t->p_58;
    func_123D68(loc, t, D_0022AFC0);
    func_04C3D0(base, loc, (char *)s1 + 8);
    f = s1->f_48;
    *(float *)(base + 0x96C) = f;
    func_018C18(1);
    func_088150(2);
}
