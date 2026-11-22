/* LEVEL_22:0x0B3BA0 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_0015FF14;
extern int D_0015FE98;
extern int D_0015FE9C;
extern float D_0015FEF8;
extern float D_0015FEFC;
extern float D_0015FF00;
extern float D_0015FF04;
extern char D_0015FEA8[];
extern char D_0015FED0[];
extern Chunk D_002098F0[];

extern unsigned int func_0793A0(int a);
extern int func_094FC8(void);
extern Obj *func_079290(int a);
extern Pad *func_0792C8(int a);
extern int func_024988(int a);
extern void func_0B38D8(int *a, int *b);
extern int func_094F68(void);
extern int func_0A4570(int a);
extern void func_016E40(int a, int b);
extern int func_0AAF30(int a);
extern void func_0A10A0(char *a);
extern int func_0A1138(char *a);
extern int func_091B08(int a, int b, int c);

void func_0B3BA0(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_0793A0(0x6B10);
    if (func_094FC8() != 0) {
        o = func_079290(0x6B10);
        p = func_0792C8(0x6B10);
        sy = (int)(p->x * D_0015FF14);
        sx = (int)(p->y * D_0015FF14);
        if (func_024988(4) != 0)
            sy = -sy;
        D_0015FE98 = D_0015FE98 - sy;
        D_0015FE9C = D_0015FE9C - sx;
        func_0B38D8(&D_0015FE98, &D_0015FE9C);
        if (o->bits & 0x8000) {
            D_0015FEF8 = D_0015FEF8 + D_0015FEFC;
            if (D_0015FEF8 > D_0015FF00)
                D_0015FEF8 = D_0015FF00;
        } else if (o->bits & 0x2000) {
            D_0015FEF8 = D_0015FEF8 - D_0015FEFC;
            if (D_0015FEF8 < D_0015FF04)
                D_0015FEF8 = D_0015FF04;
        }
    }
    if ((mode & 0x81009) != 0 || func_094F68() == 0) {
        func_0A4570(7);
        func_016E40(4, 0);
    } else if (mode & 0x4000) {
        func_0A4570(6);
        func_0AAF30(15);
    }
    func_0A10A0(D_0015FEA8);
    q = D_0015FED0;
    func_0A10A0(q);
    r = func_0A1138(q);
    func_091B08(D_002098F0[6].h, 5, r);
}
