/* LEVEL_08:0x087878 -- placement copy of LEVEL_01_07F908.c: renders an object tinted into the auxiliary target with its own matrices and returns the draw result. */
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
extern char D_00289AC0[];
extern char D_0023F038[];

extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void PushMatrix__Q34scee3Psp3Gumv(void);
extern void PopMatrix__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(const void *m);
extern void dlib_ms_screen_matrix__FPfiiiiii(float *m, int a, int b, int w, int h, int c, int d);
extern void func_0B0150(int a);
extern void func_0AB4B8(int a);
extern void func_0AB228(int a);
extern void func_0AB208(int a);
extern void func_0AB4C0(int a, int b, int c, int d, int e);
extern void func_0B0348(void *rt, int a);
extern void func_096BE0(float a, float b, Vec4 *p, int c);
extern void func_0ACA08(int a, int b);
extern void func_0ACE50(int a);
extern int func_087230(Obj *o, unsigned int color);
extern void func_096890(void *rt, int a, int b);

int func_087878(Obj *obj, unsigned int tint, float dy)
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
    func_0B0150(0xFF);
    func_0AB4B8(1);
    func_0AB228(5);
    func_0AB228(0);
    func_0AB208(9);
    func_0AB208(1);
    func_0AB208(4);
    func_0AB4C0(0, 2, 3, 0, 0);
    func_0AB228(1);
    gRT_AuxBuffer.w = 0x80;
    gRT_AuxBuffer.h = 0x80;
    gRT_AuxBuffer.d = 0x40;
    func_0B0348(&gRT_AuxBuffer, 7);
    dlib_ms_screen_matrix__FPfiiiiii((float *)D_00289AC0, 0, 0, gRT_AuxBuffer.w, -gRT_AuxBuffer.h, 0xFFFF, 0);
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(5);
    PushMatrix__Q34scee3Psp3Gumv();
    LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(D_0023F038);
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(4);
    PushMatrix__Q34scee3Psp3Gumv();
    LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(D_00289AC0);
    pos = obj->pos;
    pos.y += dy;
    func_096BE0(obj->cls->parts[obj->part].mesh->scale, 2.7f, &pos, 1);
    func_0ACA08(1, 1);
    func_0ACE50(1);
    result = func_087230(obj, color);
    func_0ACE50(0);
    func_0ACA08(1, 1);
    func_096890(&gRT_AuxBuffer, 0, 2);
    func_0ACA08(1, 2);
    func_0B0348(gRT_BackBuffer, 0);
    func_0AB208(1);
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
