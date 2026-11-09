/* LEVEL_01:0x1C1DF8 -- range test on the XZ plane, then forwards a sample point to a helper. */

typedef struct Vec3_1C1DF8 {
    float x;
    float y;
    float z;
} Vec3_1C1DF8;

typedef struct Sub1C1DF8 {
    unsigned char pad_00[0x2C];
    void *p_2C;
} Sub1C1DF8;

typedef struct Obj1C1DF8 {
    unsigned char pad_00[0x30];
    float f_30;
    unsigned char pad_34[4];
    float f_38;
    unsigned char pad_3C[0x18];
    Sub1C1DF8 *p_54;
} Obj1C1DF8;

extern float D_0023541C;
extern void func_01A2A0(Vec3_1C1DF8 *out);
extern void *func_084708(void *a, Vec3_1C1DF8 *b);

int func_1C1DF8(Obj1C1DF8 *o) {
    Vec3_1C1DF8 tmp;
    Sub1C1DF8 *s;
    float dx;
    float dz;
    float d2;
    void *v;

    s = o->p_54;
    func_01A2A0(&tmp);
    dx = o->f_30 - tmp.x;
    dz = o->f_38 - tmp.z;
    d2 = dx * dx + dz * dz;
    tmp.y = D_0023541C;
    if (d2 <= 400.0f) {
        v = func_084708(s->p_2C, &tmp);
        if (v != 0) {
            return 1;
        }
    }
    return 0;
}
