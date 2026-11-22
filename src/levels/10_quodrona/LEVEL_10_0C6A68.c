/* LEVEL_10:0x0C6A68 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_00209B94;
extern int D_00209B18;
extern int D_00209B1C;
extern float D_00209B78;
extern float D_00209B7C;
extern float D_00209B80;
extern float D_00209B84;
extern char D_00209B28[];
extern char D_00209B50[];
extern Chunk D_002BD130[];

extern unsigned int func_0882F0(int a);
extern int func_0A7AD0(void);
extern Obj *func_0881E0(int a);
extern Pad *func_088218(int a);
extern int func_02A1C8(int a);
extern void func_0C67A0(int *a, int *b);
extern int func_0A7A70(void);
extern int func_0B71F8(int a);
extern void func_019EA8(int a, int b);
extern int func_0BDDD0(int a);
extern void func_0B3BF8(char *a);
extern int func_0B3C90(char *a);
extern int func_0A4610(int a, int b, int c);

void func_0C6A68(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_0882F0(0x6B10);
    if (func_0A7AD0() != 0) {
        o = func_0881E0(0x6B10);
        p = func_088218(0x6B10);
        sy = (int)(p->x * D_00209B94);
        sx = (int)(p->y * D_00209B94);
        if (func_02A1C8(4) != 0)
            sy = -sy;
        D_00209B18 = D_00209B18 - sy;
        D_00209B1C = D_00209B1C - sx;
        func_0C67A0(&D_00209B18, &D_00209B1C);
        if (o->bits & 0x8000) {
            D_00209B78 = D_00209B78 + D_00209B7C;
            if (D_00209B78 > D_00209B80)
                D_00209B78 = D_00209B80;
        } else if (o->bits & 0x2000) {
            D_00209B78 = D_00209B78 - D_00209B7C;
            if (D_00209B78 < D_00209B84)
                D_00209B78 = D_00209B84;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A7A70() == 0) {
        func_0B71F8(7);
        func_019EA8(4, 0);
    } else if (mode & 0x4000) {
        func_0B71F8(6);
        func_0BDDD0(15);
    }
    func_0B3BF8(D_00209B28);
    q = D_00209B50;
    func_0B3BF8(q);
    r = func_0B3C90(q);
    func_0A4610(D_002BD130[6].h, 5, r);
}
