/* LEVEL_15:0x0F6E90 -- adds a weighted colour to the running total (stepping the entry's two-bit level when it has one), then flushes whole units of three counters through the award call. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad_00[0x4412C];
    float a_4412C;
    float b_44130;
    char pad_44134[4];
    float c_44138;
    char pad_4413C[0x44168 - 0x4413C];
    int sel_44168;
} Game;

extern unsigned char *D_00148C2C;
extern Vec4 D_0016F288[];
extern Vec4 D_0016F308[];
extern Game D_002A8B58;
extern Vec4 D_002ECC84;
extern void func_126A18(int kind, int who, float f, int n);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

static __inline__ int GetLevel(unsigned int n)
{
    unsigned char *tabs[2] = { D_00148C2C + 0x13740, D_00148C2C + 0x13B40 };
    unsigned int v;

    v = tabs[D_002A8B58.sel_44168][n >> 2];
    return (v >> ((n & 3) * 2)) & 3;
}

static __inline__ void SetLevel(unsigned int n, int v)
{
    unsigned char *tabs[2] = { D_00148C2C + 0x13740, D_00148C2C + 0x13B40 };
    unsigned char *b;

    b = &tabs[D_002A8B58.sel_44168][n >> 2];
    *b = (*b & (~3 << ((n & 3) * 2))) | (v << ((n & 3) * 2));
}

void func_0F6E90(int idx, int n, int who, float f)
{
    Vec4 *c;
    Vec4 *t;
    int lv;
    int k;

    c = &D_0016F288[idx];
    if (n >= 0) {
        lv = GetLevel(n);
        {
            Vec4 m;

            t = &D_0016F308[lv];
            m.x = c->x * t->x;
            m.y = c->y * t->y;
            m.z = c->z * t->z;
            m.w = c->w * t->w;
            D_002ECC84.x = D_002ECC84.x + m.x;
            D_002ECC84.y = D_002ECC84.y + m.y;
            D_002ECC84.z = D_002ECC84.z + m.z;
            D_002ECC84.w = D_002ECC84.w + m.w;
            lv = lv + 1;
            SetLevel(n, Past(lv, 1) ? 2 : lv);
        }
    } else {
        D_002ECC84.x = D_002ECC84.x + c->x;
        D_002ECC84.y = D_002ECC84.y + c->y;
        D_002ECC84.z = D_002ECC84.z + c->z;
        D_002ECC84.w = D_002ECC84.w + c->w;
    }
    k = (int)D_002A8B58.a_4412C;
    if (k > 0) {
        func_126A18(1, who, f, k);
        D_002A8B58.a_4412C = D_002A8B58.a_4412C - (float)k;
    }
    k = (int)D_002A8B58.b_44130;
    if (k > 0) {
        func_126A18(0, who, f, k);
        D_002A8B58.b_44130 = D_002A8B58.b_44130 - (float)k;
    }
    k = (int)D_002A8B58.c_44138;
    if (k > 0) {
        func_126A18(2, who, f, k);
        D_002A8B58.c_44138 = D_002A8B58.c_44138 - (float)k;
    }
}
