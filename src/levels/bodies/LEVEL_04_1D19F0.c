/* LEVEL_04:0x1D19F0 -- placement copy of LEVEL_01_1BEB30.c: returns 23 when a probe fails, otherwise runs a float-parameter helper and returns the result of a final helper. */

int func_1D1940(void *a0);
void func_030C50(void *a0, void *a1, int a2, int a3, int a4, float f0, float f1);
int func_1D1A68(void *a0);

struct B {
    unsigned char pad00[0x78];
    unsigned char b78;
};

struct Obj {
    unsigned char pad00[0x54];
    unsigned char *p54;
    struct B *p58;
};

int func_1D19F0(struct Obj *a0)
{
    unsigned char *s2;
    struct B *s1;

    s2 = a0->p54;
    s1 = a0->p58;
    if (func_1D1940(a0) == 0) {
        return 23;
    }
    func_030C50(s2 + 4, a0, 0, s1->b78, 0, 0.0f, 16.0f);
    return func_1D1A68(a0);
}
