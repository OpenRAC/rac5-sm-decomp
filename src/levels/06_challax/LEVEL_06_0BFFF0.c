/* LEVEL_06:0x0BFFF0 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_001EFA94;
extern int D_001EFA18;
extern int D_001EFA1C;
extern float D_001EFA78;
extern float D_001EFA7C;
extern float D_001EFA80;
extern float D_001EFA84;
extern char D_001EFA28[];
extern char D_001EFA50[];
extern Chunk D_002A0AB0[];

extern unsigned int func_080E00(int a);
extern long long func_0A1188(void);
extern Obj *func_080CF0(int a);
extern Pad *func_080D28(int a);
extern int func_0287D8(int a);
extern void func_0BFD28(int *a, int *b);
extern long long func_0A1128(void);
extern int func_0B0848(int a);
extern void func_019028(int a, int b);
extern int func_0B7380(int a);
extern void func_0AD260(char *a);
extern int func_0AD2F8(char *a);
extern int func_09DCC8(int a, int b, int c);

void func_0BFFF0(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_080E00(0x6B10);
    if (func_0A1188() != 0) {
        o = func_080CF0(0x6B10);
        p = func_080D28(0x6B10);
        sy = (int)(p->x * D_001EFA94);
        sx = (int)(p->y * D_001EFA94);
        if (func_0287D8(4) != 0)
            sy = -sy;
        D_001EFA18 = D_001EFA18 - sy;
        D_001EFA1C = D_001EFA1C - sx;
        func_0BFD28(&D_001EFA18, &D_001EFA1C);
        if (o->bits & 0x8000) {
            D_001EFA78 = D_001EFA78 + D_001EFA7C;
            if (D_001EFA78 > D_001EFA80)
                D_001EFA78 = D_001EFA80;
        } else if (o->bits & 0x2000) {
            D_001EFA78 = D_001EFA78 - D_001EFA7C;
            if (D_001EFA78 < D_001EFA84)
                D_001EFA78 = D_001EFA84;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A1128() == 0) {
        func_0B0848(7);
        func_019028(4, 0);
    } else if (mode & 0x4000) {
        func_0B0848(6);
        func_0B7380(15);
    }
    func_0AD260(D_001EFA28);
    q = D_001EFA50;
    func_0AD260(q);
    r = func_0AD2F8(q);
    func_09DCC8(D_002A0AB0[6].h, 5, r);
}
