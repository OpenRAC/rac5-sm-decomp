/* LEVEL_24:0x196748 -- placement copy of LEVEL_04_1C7B20.c: resets the object's state byte, sets a flag bit and a float, calls the setup helper and the spawn helper with a copied vector. */
typedef struct {
    int v[3];
} Vec12;

struct Rec_1C7B20 {
    char pad_00[0x18];
    int w_18;
    char pad_1C[0x64];
    float f_80;
};

struct Obj_1C7B20 {
    char pad_00[0x30];
    char pad_30[0x15];
    unsigned char b_45;
    char pad_46[0x1E];
    unsigned int flags_64;
    char pad_68[0xFF];
};

extern int D_001D9DE0[1];
extern Vec12 D_001F4F10;
extern void func_196A90(void *m, float value);
extern void func_0E4DF0(int a0, void *a1, Vec12 *v, void *a3, unsigned int t0,
                        float f12, float f13, float f14, float f15, void *t1);

int func_196748(char *a0)
{
    struct Rec_1C7B20 *r = *(struct Rec_1C7B20 **)(a0 + 0x58);
    Vec12 tmp;

    *(unsigned char *)(a0 + 0x45) = 0;
    *(unsigned int *)(a0 + 0x64) |= 0x20;
    r->f_80 = 0.1f;
    func_196A90(a0, 0.1f);
    r->w_18 = 0;
    tmp = D_001F4F10;
    func_0E4DF0(D_001D9DE0[0], a0 + 0x30, &tmp, a0, 0xFFFFFFFFu, 0.75f, 0.75f, 0.030000001192092896f, 0.030000001192092896f, a0);
    return 1;
}
