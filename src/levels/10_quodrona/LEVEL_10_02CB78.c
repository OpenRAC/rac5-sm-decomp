/* LEVEL_10:0x02CB78 -- placement copy of LEVEL_01_02CCF0.c: draws one scaled overlay model with the fixed render state. */
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
extern int D_00244BE0;

extern void *memset(void *p, int c, unsigned n);
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_Scale(Vec3 *v) __asm__("Scale__Q34scee3Psp3GumPC14ScePspFVector3");
extern void dlib_displist_set_blend_state(void *dl, unsigned long state) __asm__("dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl");

extern void func_0A1CD8(int a);
extern void func_0A1B98(int a, int b);
extern void func_0A1BA0(int a, int b);
extern void func_0A1BA8(int a, int b);
extern void func_0A1A28(int a);
extern void func_0A1CC0(int a, int b, int c);
extern void func_0A1CE0(int a, int b, int c, int d, int e);
extern void func_0A3108(int a, int b, int c);
extern void func_0A3228(int a, int b);
extern void func_0A3580(int a);
extern void func_0A3730(int a);
extern void func_0A64D8(int a, int b, int c, int d, int e, int f);
extern void func_08C598(int a);
extern void func_08BFA8(void);
extern void func_089330(void *m, int a, int b, float f);
extern void func_089570(void *m);
extern void func_08BFF8(void);
extern void func_08CCD0(void);
extern void func_0A1BB8(float a, float b);
extern void func_0886B8(char *a, int b, int c, int d, int e, int f, int g, int h, float f0, float f1, float f2);

void func_02CB78(Obj *o)
{
    char *m;
    Info *info;
    Vec3 t;
    Vec3 v;

    func_0A1CD8(0);
    m = (char *)o + 0x40;
    func_0A1B98(1, 1);
    func_0A1BA0(0, 1);
    func_0A1BA8(0, 0);
    func_0A1A28(9);
    func_0A1A28(4);
    func_0A1A28(0);
    func_0A1CC0(6, 0, 0xFF);
    func_0A1CE0(0, 2, 3, 0, 0);
    func_0A3108(1, 0, 1);
    func_0A3228(1, 1);
    func_0A3580(1);
    func_0A3730(1);
    dlib_displist_set_blend_state(*(void **)(db_dlist + 0x54), 0x44);
    func_0A64D8(0, 0, 0x200, 0x1A0, 0xFF0000, 0);
    func_0A3228(1, 2);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadMatrix(o);
    Gum_UpdateMatrix();
    func_08C598(-1);
    func_08BFA8();
    func_089330(m, 0, 0, 0.03333333507180214f);
    func_089570(m);
    func_08BFF8();
    func_08CCD0();
    info = o->fA8->f4->f1C;
    memset(&v, 0, sizeof v);
    v.x = o->fA0;
    v.y = o->fA0;
    v.z = o->fA0;
    t = v;
    Gum_Scale(&t);
    func_0A1BB8(info->f8, -info->fC);
    func_0886B8((char *)o->fA8->f4, D_00244BE0, o->f4C, o->fA4, 1, 0, 0, 0, 0.0f, 0.0f, 0.125f);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
}
