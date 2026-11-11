/* LEVEL_19:0x1578D0 -- placement copy of LEVEL_01_1947A8.c: spawns a randomly jittered, color-blended particle burst at an entity. */
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
extern Info *func_021D08(int, int);
extern int func_0224A8(int, int);
extern void func_186668(void *, void *, void *, void *, int, int);
extern float D_001D5CD0[][8];
extern unsigned D_001D5C88[];
extern unsigned D_001D5C90[];
extern void *D_001BEFA0;
extern char D_002E5728;

void func_1578D0(Obj *o, float f)
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
    r = func_021D08(13, e->info->wF8);
    vp = &e->vel;
    v.x = vp->x;
    v.y = vp->y;
    v.z = vp->z;
    hi = f / D_001D5CD0[e->b4C][r->w3C] * 1.5f;
    lo = -hi;
    span = hi - lo;
    v.x += lo + span * ((float)rand() * 4.656613e-10f);
    v.y += lo + span * ((float)rand() * 4.656613e-10f);
    v.z += lo + span * ((float)rand() * 4.656613e-10f);
    idx = func_0224A8(13, e->info->wF8);
    p0 = &D_001D5C88[idx];
    p1 = &D_001D5C90[idx];
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
    func_186668(D_001BEFA0, &D_002E5728, &e->pos, &v, col, 2);
}
