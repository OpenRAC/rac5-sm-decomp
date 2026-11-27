/* LEVEL_09:0x0C29A0 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_001EA994;
extern int D_001EA918;
extern int D_001EA91C;
extern float D_001EA978;
extern float D_001EA97C;
extern float D_001EA980;
extern float D_001EA984;
extern char D_001EA928[];
extern char D_001EA950[];
extern Chunk D_0029B4B0[];

extern unsigned int func_084940(int a);
extern long long func_0A3C68(void);
extern Obj *func_084830(int a);
extern Pad *func_084868(int a);
extern int func_029258(int a);
extern void func_0C26D8(int *a, int *b);
extern long long func_0A3C08(void);
extern int func_0B32D0(int a);
extern void func_019C18(int a, int b);
extern int func_0B9D30(int a);
extern void func_0AFCD0(char *a);
extern int func_0AFD68(char *a);
extern int func_0A07A8(int a, int b, int c);

void func_0C29A0(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_084940(0x6B10);
    if (func_0A3C68() != 0) {
        o = func_084830(0x6B10);
        p = func_084868(0x6B10);
        sy = (int)(p->x * D_001EA994);
        sx = (int)(p->y * D_001EA994);
        if (func_029258(4) != 0)
            sy = -sy;
        D_001EA918 = D_001EA918 - sy;
        D_001EA91C = D_001EA91C - sx;
        func_0C26D8(&D_001EA918, &D_001EA91C);
        if (o->bits & 0x8000) {
            D_001EA978 = D_001EA978 + D_001EA97C;
            if (D_001EA978 > D_001EA980)
                D_001EA978 = D_001EA980;
        } else if (o->bits & 0x2000) {
            D_001EA978 = D_001EA978 - D_001EA97C;
            if (D_001EA978 < D_001EA984)
                D_001EA978 = D_001EA984;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A3C08() == 0) {
        func_0B32D0(7);
        func_019C18(4, 0);
    } else if (mode & 0x4000) {
        func_0B32D0(6);
        func_0B9D30(15);
    }
    func_0AFCD0(D_001EA928);
    q = D_001EA950;
    func_0AFCD0(q);
    r = func_0AFD68(q);
    func_0A07A8(D_0029B4B0[6].h, 5, r);
}
