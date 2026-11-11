/* LEVEL_19:0x072698 -- placement copy of LEVEL_16_072550.c: renders an object's model into an offscreen buffer using a tinted color and returns the draw result. */
typedef struct {
    short pad0[4];
    unsigned short w;
    unsigned short h;
    short d;
} RT;
typedef struct {
    float v[4];
} Vec4;
typedef struct {
    char pad0[4];
    char *base;
} Tbl;
typedef struct {
    char pad0[0x30];
    Vec4 pos;
    Tbl *tbl;
    unsigned char idx;
} Obj;
typedef struct {
    char pad0[4];
    struct {
        char pad0[0x38];
        float f38;
    } *p;
} Ent;

extern RT gRT_AuxBuffer;
extern RT gRT_BackBuffer;
extern float D_001F1080[];
extern float D_001A5328[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_094258(int a);
extern void func_08F718(int a);
extern void func_08F480(int a);
extern void func_08F460(int a);
extern void func_08F720(int a, int b, int c, int d, int e);
extern void func_094420(void *rt, int a);
extern void func_080380(Vec4 *v, int a, float f, float g);
extern void func_090C00(int a, int b);
extern void func_091048(int a);
extern int func_072050(Obj *o, unsigned int color);
extern void func_080030(void *rt, int a, int b);

int func_072698(Obj *o, unsigned char b, float dy)
{
    unsigned int color;
    int r;
    Vec4 v;

    color = (b << 16) | 0xFF000000 | (b << 8); color = color | b;
    Gum_MatrixMode(0);
    Gum_PushMatrix();
    Gum_MatrixMode(1);
    Gum_PushMatrix();
    func_094258(0xFF);
    func_08F718(1);
    func_08F480(5);
    func_08F480(0);
    func_08F460(9);
    func_08F460(1);
    func_08F460(4);
    func_08F720(0, 2, 3, 0, 0);
    func_08F480(1);
    gRT_AuxBuffer.w = 0x40;
    gRT_AuxBuffer.h = 0x40;
    gRT_AuxBuffer.d = 0x40;
    func_094420(&gRT_AuxBuffer, 7);
    dlib_ms_screen_matrix(D_001F1080, 0, 0, gRT_AuxBuffer.w, -gRT_AuxBuffer.h, 0xFFFF, 0);
    Gum_MatrixMode(5);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_001A5328);
    Gum_MatrixMode(4);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_001F1080);
    v = o->pos;
    v.v[1] += dy;
    func_080380(&v, 1, ((Ent *)(o->tbl->base + o->idx * 0x34))->p->f38, 2.700000047683716f);
    func_090C00(1, 1);
    func_091048(1);
    r = func_072050(o, color);
    func_091048(0);
    func_090C00(1, 1);
    func_080030(&gRT_AuxBuffer, 0, 2);
    func_090C00(1, 2);
    func_094420(&gRT_BackBuffer, 0);
    func_08F460(1);
    Gum_MatrixMode(1);
    Gum_PopMatrix();
    Gum_MatrixMode(0);
    Gum_PopMatrix();
    Gum_MatrixMode(4);
    Gum_PopMatrix();
    Gum_MatrixMode(5);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    return r;
}
