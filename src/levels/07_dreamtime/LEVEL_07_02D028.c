/* LEVEL_07:0x02D028 -- placement copy of LEVEL_01_02CCF0.c: draws one scaled overlay model with the fixed render state. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[8];
    float f8;
    float fC;
} Info;

typedef struct {
    char pad0[0x1C];
    Info *f1C;
} Inner;

typedef struct {
    int f0;
    Inner *f4;
} Holder;

typedef struct {
    char pad0[0x4C];
    int f4C;
    char pad1[0xA0 - 0x50];
    float fA0;
    unsigned short fA4;
    char pad2[0xA8 - 0xA6];
    Holder *fA8;
} Obj;

extern char db_dlist[];
extern int D_002510E0;

extern void *memset(void *p, int c, unsigned n);
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_Scale(Vec3 *v) __asm__("Scale__Q34scee3Psp3GumPC14ScePspFVector3");
extern void dlib_displist_set_blend_state(void *dl, unsigned long state) __asm__("dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl");

extern void func_0A2BC0(int a);
extern void func_0A2A80(int a, int b);
extern void func_0A2A88(int a, int b);
extern void func_0A2A90(int a, int b);
extern void func_0A2910(int a);
extern void func_0A2BA8(int a, int b, int c);
extern void func_0A2BC8(int a, int b, int c, int d, int e);
extern void func_0A3FF0(int a, int b, int c);
extern void func_0A4110(int a, int b);
extern void func_0A4468(int a);
extern void func_0A4618(int a);
extern void func_0A73C0(int a, int b, int c, int d, int e, int f);
extern void func_08E220(int a);
extern void func_08DCA8(void);
extern void func_08B030(void *m, int a, int b, float f);
extern void func_08B270(void *m);
extern void func_08DCF8(void);
extern void func_08E7E8(void);
extern void func_0A2AA0(float a, float b);
extern void func_08A420(char *a, int b, int c, int d, int e, int f, int g, int h, float f0, float f1, float f2);

void func_02D028(Obj *o)
{
    char *m;
    Info *info;
    Vec3 t;
    Vec3 v;

    func_0A2BC0(0);
    m = (char *)o + 0x40;
    func_0A2A80(1, 1);
    func_0A2A88(0, 1);
    func_0A2A90(0, 0);
    func_0A2910(9);
    func_0A2910(4);
    func_0A2910(0);
    func_0A2BA8(6, 0, 0xFF);
    func_0A2BC8(0, 2, 3, 0, 0);
    func_0A3FF0(1, 0, 1);
    func_0A4110(1, 1);
    func_0A4468(1);
    func_0A4618(1);
    dlib_displist_set_blend_state(*(void **)(db_dlist + 0x54), 0x44);
    func_0A73C0(0, 0, 0x200, 0x1A0, 0xFF0000, 0);
    func_0A4110(1, 2);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadMatrix(o);
    Gum_UpdateMatrix();
    func_08E220(-1);
    func_08DCA8();
    func_08B030(m, 0, 0, 0.03333333507180214f);
    func_08B270(m);
    func_08DCF8();
    func_08E7E8();
    info = o->fA8->f4->f1C;
    memset(&v, 0, sizeof v);
    v.x = o->fA0;
    v.y = o->fA0;
    v.z = o->fA0;
    t = v;
    Gum_Scale(&t);
    func_0A2AA0(info->f8, -info->fC);
    func_08A420((char *)o->fA8->f4, D_002510E0, o->f4C, o->fA4, 1, 0, 0, 0, 0.0f, 0.0f, 0.125f);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
}
