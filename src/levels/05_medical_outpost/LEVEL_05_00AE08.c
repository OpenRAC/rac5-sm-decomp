/* LEVEL_05:0x00AE08 -- placement copy of LEVEL_01_00AE08.c: resets the camera object: copies the default offset, sets its flag bits, and fills in the follow, tuning and spring defaults. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Chan {
    float cur;
    char pad4[16];
} Chan;

typedef struct Cam {
    char pad00[0x40];
    unsigned long long b0 : 1;
    unsigned long long b1 : 1;
    unsigned long long b2 : 1;
    unsigned long long b3 : 1;
    unsigned long long b4 : 1;
    unsigned long long b5 : 1;
    unsigned long long b6 : 1;
    unsigned long long b7 : 1;
    unsigned long long b8 : 1;
    unsigned long long b9 : 1;
    unsigned long long b10 : 1;
    unsigned long long b11 : 1;
    unsigned long long b12 : 1;
    unsigned long long b13 : 1;
    unsigned long long b14 : 1;
    unsigned long long b15 : 1;
    unsigned long long b16 : 1;
    unsigned long long b17 : 1;
    unsigned long long b18 : 1;
    unsigned char b19 : 1;
    unsigned long long b20 : 1;
    V3 v44;
    char pad50[0x78 - 0x50];
    Chan c78;
    char pad8C_[0x8C - 0x78 - sizeof(Chan)];
    Chan c8C;
    char padA0_[0xA0 - 0x8C - sizeof(Chan)];
    Chan cA0;
    char padB4_[0xB4 - 0xA0 - sizeof(Chan)];
    Chan cB4;
    char padC8_[0xC8 - 0xB4 - sizeof(Chan)];
    int wC8;
    char padCC[0x154 - 0xCC];
    float f154;
    char pad158[0x160 - 0x158];
    int w160;
    float f164;
    float f168;
    char pad16C[0x1A4 - 0x16C];
    V3 v1A4;
    char pad1B0[0x1E4 - 0x1B0];
    Chan c1E4;
    char pad1F8_[0x20C - 0x1E4 - sizeof(Chan)];
    int w20C;
    char pad210[0x218 - 0x210];
    int w218;
    char pad21C[0x230 - 0x21C];
    int w230;
    char pad234[0x290 - 0x234];
    float f290;
    float f294;
    int w298;
    int w29C;
    float f2A0;
    float f2A4;
    float f2A8;
    char pad2AC[0x2B4 - 0x2AC];
    float f2B4;
    float f2B8;
    float f2BC;
    float f2C0;
    int w2C4;
    char pad2C8[0x33C - 0x2C8];
    int w33C;
    float f340;
    float f344;
    float f348;
    float f34C;
    float f350;
} Cam;

typedef struct Owner {
    char pad0[0x24];
    int w24;
} Owner;

extern Cam *D_001DE5D4[1];
extern Owner *D_001E332C[1];
extern V3 D_00206D88;
extern V3 D_00206D78;

extern void func_001908(Chan *c, float f0, float f1, int i0, int i1);

static __inline__ void Vec3Copy(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_00AE08(void)
{
    Vec3Copy(&D_001DE5D4[0]->v44, &D_00206D88);
    D_001DE5D4[0]->b0 = 1;
    D_001DE5D4[0]->b1 = 1;
    D_001DE5D4[0]->b2 = 1;
    D_001DE5D4[0]->b3 = D_001E332C[0]->w24 != 0;
    D_001DE5D4[0]->b10 = 1;
    D_001DE5D4[0]->b11 = 1;
    D_001DE5D4[0]->b12 = 0;
    D_001DE5D4[0]->b18 = 0;
    D_001DE5D4[0]->b9 = 0;
    D_001DE5D4[0]->b20 = D_001DE5D4[0]->b19;
    D_001DE5D4[0]->b19 = 0;
    D_001DE5D4[0]->b13 = 1;
    func_001908(&D_001DE5D4[0]->c78, 8.0f, 1.0f, 0, 2);
    func_001908(&D_001DE5D4[0]->c8C, 1.1399999856948853f, 1.0f, 0, 2);
    func_001908(&D_001DE5D4[0]->cA0, D_001DE5D4[0]->cA0.cur, 1.0f, 0, 2);
    func_001908(&D_001DE5D4[0]->cB4, D_001DE5D4[0]->cB4.cur, 1.0f, 0, 2);
    D_001DE5D4[0]->wC8 = 0;
    D_001DE5D4[0]->f154 = 1.0f;
    D_001DE5D4[0]->w160 = 0;
    D_001DE5D4[0]->f164 = 1.0f;
    D_001DE5D4[0]->f168 = 0.5f;
    Vec3Copy(&D_001DE5D4[0]->v1A4, &D_00206D78);
    D_001DE5D4[0]->w20C = 0;
    D_001DE5D4[0]->w218 = 0;
    D_001DE5D4[0]->w230 = 0;
    func_001908(&D_001DE5D4[0]->c1E4, 0.4000000059604645f, 1.0f, 0, 2);
    D_001DE5D4[0]->f290 = 0.30000001192092896f;
    D_001DE5D4[0]->f294 = 0.8500000238418579f;
    D_001DE5D4[0]->w298 = 0;
    D_001DE5D4[0]->w29C = 0;
    D_001DE5D4[0]->f2A0 = -0.20000000298023224f;
    D_001DE5D4[0]->f2A4 = 0.5f;
    D_001DE5D4[0]->f2A8 = 0.20000000298023224f;
    D_001DE5D4[0]->f2B4 = 1.2000000476837158f;
    D_001DE5D4[0]->f2B8 = 0.8999999761581421f;
    D_001DE5D4[0]->f2BC = 50.000003814697266f;
    D_001DE5D4[0]->f2C0 = 0.699999988079071f;
    D_001DE5D4[0]->w2C4 = 0;
    D_001DE5D4[0]->w33C = 0;
    D_001DE5D4[0]->f340 = 0.8500000238418579f;
    D_001DE5D4[0]->f344 = 0.20000000298023224f;
    D_001DE5D4[0]->f348 = 1.2000000476837158f;
    D_001DE5D4[0]->f34C = 1.0f;
    D_001DE5D4[0]->f350 = 0.10000000149011612f;
}
