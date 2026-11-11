/* LEVEL_07:0x1A6728 -- placement copy of LEVEL_01_1947A8.c: spawns a randomly jittered, color-blended particle burst at an entity. */
typedef struct Info {
    char pad0[0x3C];
    int w3C;
    char pad40[0xF8 - 0x40];
    int wF8;
} Info;

typedef struct Vec3 { float x, y, z; } Vec3;

typedef struct Ent {
    Info *info;
    char pad4[0xC];
    Vec3 pos;
    char pad1C[4];
    Vec3 vel;
    char pad2C[0x4C - 0x2C];
    unsigned char b4C;
} Ent;

typedef struct Obj {
    char pad0[0x58];
    Ent *ent;
} Obj;

extern int rand(void);
extern Info *func_024BF0(int, int);
extern int func_025468(int, int);
extern void func_1E29B0(void *, void *, void *, void *, int, int);
extern float D_0023AE88[][8];
extern unsigned D_0023AE40[];
extern unsigned D_0023AE48[];
extern void *D_0021D390;
extern char D_003AC9B0;

void func_1A6728(Obj *o, float f)
{
    Ent *e;
    Vec3 v;
    Vec3 *vp;
    Info *r;
    float hi, lo, span, t, u;
    int idx;
    unsigned c0, c1;
    int b0, b1, b2, b3, col;
    unsigned *p0, *p1;

    e = o->ent;
    r = func_024BF0(13, e->info->wF8);
    vp = &e->vel;
    v.x = vp->x;
    v.y = vp->y;
    v.z = vp->z;
    hi = f / D_0023AE88[e->b4C][r->w3C] * 1.5f;
    lo = -hi;
    span = hi - lo;
    v.x += lo + span * ((float)rand() * 4.656613e-10f);
    v.y += lo + span * ((float)rand() * 4.656613e-10f);
    v.z += lo + span * ((float)rand() * 4.656613e-10f);
    idx = func_025468(13, e->info->wF8);
    p0 = &D_0023AE40[idx];
    p1 = &D_0023AE48[idx];
    t = (float)rand() * 4.6566123e-10f;
    c0 = *p0;
    c1 = *p1;
    u = 1.0f - t;
    b0 = (int)((float)(c0 & 0xFF) * u + (float)(c1 & 0xFF) * t);
    b1 = (int)((float)((c0 >> 8) & 0xFF) * u + (float)((c1 >> 8) & 0xFF) * t);
    b2 = (int)((float)((c0 >> 16) & 0xFF) * u + (float)((c1 >> 16) & 0xFF) * t);
    b3 = (int)((float)((c0 >> 24) & 0xFF) * u + (float)((c1 >> 24) & 0xFF) * t);
    col = b3 << 24;
    col |= b2 << 16;
    col |= b1 << 8;
    col |= b0;
    func_1E29B0(D_0021D390, &D_003AC9B0, &e->pos, &v, col, 2);
}
