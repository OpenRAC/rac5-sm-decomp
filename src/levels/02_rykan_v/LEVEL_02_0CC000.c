/* LEVEL_02:0x0CC000 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_00215B54;
extern int D_00215AD8;
extern int D_00215ADC;
extern float D_00215B38;
extern float D_00215B3C;
extern float D_00215B40;
extern float D_00215B44;
extern char D_00215AE8[];
extern char D_00215B10[];
extern Chunk D_002CB230[];

extern unsigned int func_08E8B8(int a);
extern long long func_0AD2C8(void);
extern Obj *func_08E7A8(int a);
extern Pad *func_08E7E0(int a);
extern int func_02ABB8(int a);
extern void func_0CBD38(int *a, int *b);
extern long long func_0AD268(void);
extern int func_0BC930(int a);
extern void func_01B188(int a, int b);
extern int func_0C3390(int a);
extern void func_0B9330(char *a);
extern int func_0B93C8(char *a);
extern int func_0A9E08(int a, int b, int c);

void func_0CC000(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_08E8B8(0x6B10);
    if (func_0AD2C8() != 0) {
        o = func_08E7A8(0x6B10);
        p = func_08E7E0(0x6B10);
        sy = (int)(p->x * D_00215B54);
        sx = (int)(p->y * D_00215B54);
        if (func_02ABB8(4) != 0)
            sy = -sy;
        D_00215AD8 = D_00215AD8 - sy;
        D_00215ADC = D_00215ADC - sx;
        func_0CBD38(&D_00215AD8, &D_00215ADC);
        if (o->bits & 0x8000) {
            D_00215B38 = D_00215B38 + D_00215B3C;
            if (D_00215B38 > D_00215B40)
                D_00215B38 = D_00215B40;
        } else if (o->bits & 0x2000) {
            D_00215B38 = D_00215B38 - D_00215B3C;
            if (D_00215B38 < D_00215B44)
                D_00215B38 = D_00215B44;
        }
    }
    if ((mode & 0x81009) != 0 || func_0AD268() == 0) {
        func_0BC930(7);
        func_01B188(4, 0);
    } else if (mode & 0x4000) {
        func_0BC930(6);
        func_0C3390(15);
    }
    func_0B9330(D_00215AE8);
    q = D_00215B10;
    func_0B9330(q);
    r = func_0B93C8(q);
    func_0A9E08(D_002CB230[6].h, 5, r);
}
