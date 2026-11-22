/* LEVEL_01:0x07F908 -- renders an object tinted into the auxiliary target with its own matrices and returns the draw result. */
typedef struct AuxRT {
    char pad[8];
    unsigned short w;
    unsigned short h;
    short d;
} AuxRT;

typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Mesh {
    char pad00[0x38];
    float scale;
} Mesh;

typedef struct Part {
    char pad00[4];
    Mesh *mesh;
    char pad08[0x2C];
} Part;

typedef struct Cls {
    char pad00[4];
    Part *parts;
} Cls;

typedef struct Obj {
    char pad00[0x30];
    Vec4 pos;
    Cls *cls;
    unsigned char part;
} Obj;

extern AuxRT gRT_AuxBuffer;
extern char gRT_BackBuffer[];
extern char D_0023A830[];
extern char D_001F6178[];

extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void PushMatrix__Q34scee3Psp3Gumv(void);
extern void PopMatrix__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(const void *m);
extern void dlib_ms_screen_matrix__FPfiiiiii(float *m, int a, int b, int w, int h, int c, int d);
extern void func_0A5858(int a);
extern void func_0A0BC0(int a);
extern void func_0A0928(int a);
extern void func_0A0908(int a);
extern void func_0A0BC8(int a, int b, int c, int d, int e);
extern void func_0A5A50(void *rt, int a);
extern void func_08ECC0(float a, float b, Vec4 *p, int c);
extern void func_0A2110(int a, int b);
extern void func_0A2558(int a);
extern int func_07F2C0(Obj *o, unsigned int color);
extern void func_08E970(void *rt, int a, int b);

int func_07F908(Obj *obj, unsigned int tint, float dy)
{
    Vec4 pos;
    int result;
    unsigned int color;

    tint &= 0xFF;
    color = (tint << 16) | 0xFF000000 | (tint << 8);
    color = color | tint;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(0);
    PushMatrix__Q34scee3Psp3Gumv();
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(1);
    PushMatrix__Q34scee3Psp3Gumv();
    func_0A5858(0xFF);
    func_0A0BC0(1);
    func_0A0928(5);
    func_0A0928(0);
    func_0A0908(9);
    func_0A0908(1);
    func_0A0908(4);
    func_0A0BC8(0, 2, 3, 0, 0);
    func_0A0928(1);
    gRT_AuxBuffer.w = 0x80;
    gRT_AuxBuffer.h = 0x80;
    gRT_AuxBuffer.d = 0x40;
    func_0A5A50(&gRT_AuxBuffer, 7);
    dlib_ms_screen_matrix__FPfiiiiii((float *)D_0023A830, 0, 0, gRT_AuxBuffer.w, -gRT_AuxBuffer.h, 0xFFFF, 0);
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(5);
    PushMatrix__Q34scee3Psp3Gumv();
    LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(D_001F6178);
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(4);
    PushMatrix__Q34scee3Psp3Gumv();
    LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(D_0023A830);
    pos = obj->pos;
    pos.y += dy;
    func_08ECC0(obj->cls->parts[obj->part].mesh->scale, 2.7f, &pos, 1);
    func_0A2110(1, 1);
    func_0A2558(1);
    result = func_07F2C0(obj, color);
    func_0A2558(0);
    func_0A2110(1, 1);
    func_08E970(&gRT_AuxBuffer, 0, 2);
    func_0A2110(1, 2);
    func_0A5A50(gRT_BackBuffer, 0);
    func_0A0908(1);
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(1);
    PopMatrix__Q34scee3Psp3Gumv();
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(0);
    PopMatrix__Q34scee3Psp3Gumv();
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(4);
    PopMatrix__Q34scee3Psp3Gumv();
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(5);
    PopMatrix__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    return result;
}
