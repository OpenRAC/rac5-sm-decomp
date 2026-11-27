/* LEVEL_03:0x0C54D8 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_00219214;
extern int D_00219198;
extern int D_0021919C;
extern float D_002191F8;
extern float D_002191FC;
extern float D_00219200;
extern float D_00219204;
extern char D_002191A8[];
extern char D_002191D0[];
extern Chunk D_002CEBB0[];

extern unsigned int func_087DE0(int a);
extern long long func_0A6738(void);
extern Obj *func_087CD0(int a);
extern Pad *func_087D08(int a);
extern int func_02A1E8(int a);
extern void func_0C5210(int *a, int *b);
extern long long func_0A66D8(void);
extern int func_0B5E08(int a);
extern void func_01A590(int a, int b);
extern int func_0BC868(int a);
extern void func_0B2808(char *a);
extern int func_0B28A0(char *a);
extern int func_0A3278(int a, int b, int c);

void func_0C54D8(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_087DE0(0x6B10);
    if (func_0A6738() != 0) {
        o = func_087CD0(0x6B10);
        p = func_087D08(0x6B10);
        sy = (int)(p->x * D_00219214);
        sx = (int)(p->y * D_00219214);
        if (func_02A1E8(4) != 0)
            sy = -sy;
        D_00219198 = D_00219198 - sy;
        D_0021919C = D_0021919C - sx;
        func_0C5210(&D_00219198, &D_0021919C);
        if (o->bits & 0x8000) {
            D_002191F8 = D_002191F8 + D_002191FC;
            if (D_002191F8 > D_00219200)
                D_002191F8 = D_00219200;
        } else if (o->bits & 0x2000) {
            D_002191F8 = D_002191F8 - D_002191FC;
            if (D_002191F8 < D_00219204)
                D_002191F8 = D_00219204;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A66D8() == 0) {
        func_0B5E08(7);
        func_01A590(4, 0);
    } else if (mode & 0x4000) {
        func_0B5E08(6);
        func_0BC868(15);
    }
    func_0B2808(D_002191A8);
    q = D_002191D0;
    func_0B2808(q);
    r = func_0B28A0(q);
    func_0A3278(D_002CEBB0[6].h, 5, r);
}
