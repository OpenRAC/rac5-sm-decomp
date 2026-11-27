/* LEVEL_04:0x0CAF08 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;
typedef struct {
    unsigned char pad[0x1800];
    int h;
    unsigned char rest[0x10000 - 0x1804];
} Chunk;

extern float D_0021A054;
extern int D_00219FD8;
extern int D_00219FDC;
extern float D_0021A038;
extern float D_0021A03C;
extern float D_0021A040;
extern float D_0021A044;
extern char D_00219FE8[];
extern char D_0021A010[];
extern Chunk D_002CE530[];

extern unsigned int func_08B220(int a);
extern long long func_0ABBC8(void);
extern Obj *func_08B110(int a);
extern Pad *func_08B148(int a);
extern int func_029E98(int a);
extern void func_0CAC40(int *a, int *b);
extern long long func_0ABB68(void);
extern int func_0BB828(int a);
extern void func_01A4A8(int a, int b);
extern int func_0C2298(int a);
extern void func_0B7FD0(char *a);
extern int func_0B8068(char *a);
extern int func_0A8708(int a, int b, int c);

void func_0CAF08(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_08B220(0x6B10);
    if (func_0ABBC8() != 0) {
        o = func_08B110(0x6B10);
        p = func_08B148(0x6B10);
        sy = (int)(p->x * D_0021A054);
        sx = (int)(p->y * D_0021A054);
        if (func_029E98(4) != 0)
            sy = -sy;
        D_00219FD8 = D_00219FD8 - sy;
        D_00219FDC = D_00219FDC - sx;
        func_0CAC40(&D_00219FD8, &D_00219FDC);
        if (o->bits & 0x8000) {
            D_0021A038 = D_0021A038 + D_0021A03C;
            if (D_0021A038 > D_0021A040)
                D_0021A038 = D_0021A040;
        } else if (o->bits & 0x2000) {
            D_0021A038 = D_0021A038 - D_0021A03C;
            if (D_0021A038 < D_0021A044)
                D_0021A038 = D_0021A044;
        }
    }
    if ((mode & 0x81009) != 0 || func_0ABB68() == 0) {
        func_0BB828(7);
        func_01A4A8(4, 0);
    } else if (mode & 0x4000) {
        func_0BB828(6);
        func_0C2298(15);
    }
    func_0B7FD0(D_00219FE8);
    q = D_0021A010;
    func_0B7FD0(q);
    r = func_0B8068(q);
    func_0A8708(D_002CE530[6].h, 5, r);
}
