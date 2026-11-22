/* USA LEVEL_02.REL:0x070D90, 552-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 11 differing words; first difference at 0x90.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct V4 {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct S {
    char b[0x44];
} S;

typedef struct Info {
    char pad00[0x24];
    unsigned int id;
    unsigned char b;
} Info;

typedef struct Self {
    char pad00[0x40];
    Info *info;
} Self;

typedef struct VTab {
    char padDC_[0xDC];
    void (*cbDC)(void);
    void (*cbE0)(void);
    void *dataE4;
} VTab;

typedef struct Obj {
    char pad00[0x48];
    VTab *vt;
    char pad4C[0x58 - 0x4C];
    void **slot;
    char pad5C[8];
    int flags;
} Obj;

typedef struct G {
    char pad000[0x102];
    unsigned short h102;
    char pad104[0x168 - 0x104];
    int f168;
    char pad16C[0x3A0 - 0x16C];
    S sub;
    V4 pair;
    char pad3F4[0x59C - 0x3F4];
    Obj *owner;
    char pad5A0[0x5AC - 0x5A0];
    void *target;
    char pad5B0[0x96C - 0x5B0];
    float f96C;
    char pad970[0xDD4 - 0x970];
    int fDD4;
    char padDD8[0xFC8 - 0xDD8];
    int fFC8;
} G;

extern G D_0024C650;
extern V4 D_00250768;
extern unsigned char D_00222E08;
extern float D_00209A14;

extern void func_040DB0(void *value);
extern void func_040DF8(void *value);
extern void func_040E50(void *value);
extern void func_040EA8(void *value);
extern void func_040F50(void *value);
extern void func_0529C8(float t, void *g, int z);
extern void func_068578(char *a0);
extern void func_13C230(void *owner);
extern void func_03DBC8(void);
extern void func_03E850(void);
extern void func_041798(void);
extern void func_090250(S *s, unsigned char b1, unsigned char b2);
extern int func_092660(void *owner, int value);
extern void func_083428(void *o, float t, unsigned int idx);
extern void func_15B7A0(float f12, float f13);
extern void func_0286E0(void);
extern void func_082F38(unsigned int value);
extern int func_050F98(char *o, int id, int force);
extern void func_050E30(void *o, void *s);
extern void func_03E8A0(char *a0);
extern void func_06FFF8(char *record, unsigned int mode);
extern void func_070070(char *object, int first, int second, int third);

void func_070D90(Self *self, Obj *obj)
{
    G *g;
    void **slot;
    unsigned int id;
    unsigned char b;

    g = &D_0024C650;
    g->fDD4 = 0;
    g->h102 = 0;
    func_040DB0((void *)0);
    id = self->info->id;
    if (id == 0x9B5CFBD6) {
        func_0529C8(0.0f, g, 0);
        func_068578((char *)g);
    } else if (id == 0x86E8A1BF) {
        func_13C230(g->owner);
    }
    *obj->slot = g;
    obj->vt->cbDC = func_03DBC8;
    obj->vt->cbE0 = func_03E850;
    obj->vt->dataE4 = g;
    func_090250(&g->sub, D_00222E08, 1);
    func_092660(g->owner->vt, (int)&g->sub);
    g->pair = D_00250768;
    obj->vt->cbE0 = func_041798;
    obj->flags = obj->flags & ~0x20;
    func_040DF8((void *)1);
    func_040E50((void *)1);
    func_040EA8((void *)1);
    func_040F50((void *)1);
    if (g->target != 0) {
        func_083428(g->target, 0.0f, 0);
    }
    func_15B7A0(0.2f, 0.6f);
    func_082F38((unsigned int)func_0286E0);
    func_050F98((char *)g, g->fFC8, 1);
    if (0.0f < D_00209A14) {
        g->f96C = D_00209A14;
        D_00209A14 = -1.0f;
    }
    g->owner = obj;
    func_050E30(g, obj);
    func_03E8A0((char *)g);
    g->f168 = 0;
    func_083428(g->owner, 0.0f, 0);
    func_06FFF8((char *)g, 0x34);
    func_070070((char *)g, 0, 0xFFFF, 0x34);
}
