/* LEVEL_04:0x1C7B20 -- resets the object's state byte, sets a flag bit and a float, calls the setup helper and the spawn helper with a copied vector. */
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

extern int D_00222660[1];
extern Vec12 D_00241BB0;
extern void func_1C7E68(void *m, float value);
extern void func_0F4718(int a0, void *a1, Vec12 *v, void *a3, unsigned int t0,
                        float f12, float f13, float f14, float f15, void *t1);

int func_1C7B20(char *a0)
{
    struct Rec_1C7B20 *r = *(struct Rec_1C7B20 **)(a0 + 0x58);
    Vec12 tmp;

    *(unsigned char *)(a0 + 0x45) = 0;
    *(unsigned int *)(a0 + 0x64) |= 0x20;
    r->f_80 = 0.1f;
    func_1C7E68(a0, 0.1f);
    r->w_18 = 0;
    tmp = D_00241BB0;
    func_0F4718(D_00222660[0], a0 + 0x30, &tmp, a0, 0xFFFFFFFFu, 0.75f, 0.75f, 0.030000001192092896f, 0.030000001192092896f, a0);
    return 1;
}
