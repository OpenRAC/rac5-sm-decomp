/* LEVEL_10:0x19F240 -- copies a three-float vector from a fixed table into a stack temporary and passes it with two field pointers to a helper. */

struct Obj {
    char pad_00[0x58];
    char *p_58;
};

extern char D_0023E540[];
extern char D_0022E3C4[];

void func_013510(struct Obj *a0, char *a1, char *a2, float *a3, char *a4);

void func_19F240(struct Obj *a0)
{
    float tmp[3];
    char *base;
    char *p;
    float *src;

    base = D_0023E540;
    src = (float *)(base + 0x30);
    tmp[0] = *(float *)(base + 0x30);
    tmp[1] = src[1];
    tmp[2] = src[2];
    p = a0->p_58;
    func_013510(a0, p + 0x110, p + 0x114, tmp, D_0022E3C4);
}
