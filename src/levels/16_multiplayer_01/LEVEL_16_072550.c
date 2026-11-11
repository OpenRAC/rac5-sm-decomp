/* LEVEL_16:0x072550 -- renders an object's model into an offscreen buffer using a tinted color and returns the draw result. */
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
extern float D_001F0F00[];
extern float D_001A41A8[];
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void dlib_ms_screen_matrix(float *m, int a, int b, int c, int d, int e, int f) __asm__("dlib_ms_screen_matrix__FPfiiiiii");
extern void func_0949C8(int a);
extern void func_08FE88(int a);
extern void func_08FBE8(int a);
extern void func_08FBC8(int a);
extern void func_08FE90(int a, int b, int c, int d, int e);
extern void func_094B90(void *rt, int a);
extern void func_07FED0(Vec4 *v, int a, float f, float g);
extern void func_091370(int a, int b);
extern void func_0917B8(int a);
extern int func_071F08(Obj *o, unsigned int color);
extern void func_07FB80(void *rt, int a, int b);

int func_072550(Obj *o, unsigned char b, float dy)
{
    unsigned int color;
    int r;
    Vec4 v;

    color = (b << 16) | 0xFF000000 | (b << 8); color = color | b;
    Gum_MatrixMode(0);
    Gum_PushMatrix();
    Gum_MatrixMode(1);
    Gum_PushMatrix();
    func_0949C8(0xFF);
    func_08FE88(1);
    func_08FBE8(5);
    func_08FBE8(0);
    func_08FBC8(9);
    func_08FBC8(1);
    func_08FBC8(4);
    func_08FE90(0, 2, 3, 0, 0);
    func_08FBE8(1);
    gRT_AuxBuffer.w = 0x40;
    gRT_AuxBuffer.h = 0x40;
    gRT_AuxBuffer.d = 0x40;
    func_094B90(&gRT_AuxBuffer, 7);
    dlib_ms_screen_matrix(D_001F0F00, 0, 0, gRT_AuxBuffer.w, -gRT_AuxBuffer.h, 0xFFFF, 0);
    Gum_MatrixMode(5);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_001A41A8);
    Gum_MatrixMode(4);
    Gum_PushMatrix();
    Gum_LoadMatrix(D_001F0F00);
    v = o->pos;
    v.v[1] += dy;
    func_07FED0(&v, 1, ((Ent *)(o->tbl->base + o->idx * 0x34))->p->f38, 2.700000047683716f);
    func_091370(1, 1);
    func_0917B8(1);
    r = func_071F08(o, color);
    func_0917B8(0);
    func_091370(1, 1);
    func_07FB80(&gRT_AuxBuffer, 0, 2);
    func_091370(1, 2);
    func_094B90(&gRT_BackBuffer, 0);
    func_08FBC8(1);
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
