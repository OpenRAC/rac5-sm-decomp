/* LEVEL_21:0x026460 -- placement copy of LEVEL_01_02CCF0.c: draws one scaled overlay model with the fixed render state. */
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
extern int D_00183860;

extern void *memset(void *p, int c, unsigned n);
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_Scale(Vec3 *v) __asm__("Scale__Q34scee3Psp3GumPC14ScePspFVector3");
extern void dlib_displist_set_blend_state(void *dl, unsigned long state) __asm__("dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl");

extern void func_081520(int a);
extern void func_0813E0(int a, int b);
extern void func_0813E8(int a, int b);
extern void func_0813F0(int a, int b);
extern void func_081270(int a);
extern void func_081508(int a, int b, int c);
extern void func_081528(int a, int b, int c, int d, int e);
extern void func_0828E8(int a, int b, int c);
extern void func_082A08(int a, int b);
extern void func_082D60(int a);
extern void func_082F10(int a);
extern void func_085CB8(int a, int b, int c, int d, int e, int f);
extern void func_0707E8(int a);
extern void func_0702B8(void);
extern void func_06D640(void *m, int a, int b, float f);
extern void func_06D880(void *m);
extern void func_070308(void);
extern void func_070C20(void);
extern void func_081400(float a, float b);
extern void func_06CA30(char *a, int b, int c, int d, int e, int f, int g, int h, float f0, float f1, float f2);

void func_026460(Obj *o)
{
    char *m;
    Info *info;
    Vec3 t;
    Vec3 v;

    func_081520(0);
    m = (char *)o + 0x40;
    func_0813E0(1, 1);
    func_0813E8(0, 1);
    func_0813F0(0, 0);
    func_081270(9);
    func_081270(4);
    func_081270(0);
    func_081508(6, 0, 0xFF);
    func_081528(0, 2, 3, 0, 0);
    func_0828E8(1, 0, 1);
    func_082A08(1, 1);
    func_082D60(1);
    func_082F10(1);
    dlib_displist_set_blend_state(*(void **)(db_dlist + 0x54), 0x44);
    func_085CB8(0, 0, 0x200, 0x1A0, 0xFF0000, 0);
    func_082A08(1, 2);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadMatrix(o);
    Gum_UpdateMatrix();
    func_0707E8(-1);
    func_0702B8();
    func_06D640(m, 0, 0, 0.03333333507180214f);
    func_06D880(m);
    func_070308();
    func_070C20();
    info = o->fA8->f4->f1C;
    memset(&v, 0, sizeof v);
    v.x = o->fA0;
    v.y = o->fA0;
    v.z = o->fA0;
    t = v;
    Gum_Scale(&t);
    func_081400(info->f8, -info->fC);
    func_06CA30((char *)o->fA8->f4, D_00183860, o->f4C, o->fA4, 1, 0, 0, 0, 0.0f, 0.0f, 0.125f);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
}
