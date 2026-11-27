/* LEVEL_15:0x0A5D38 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_00155814;
extern int D_00155798;
extern int D_0015579C;
extern float D_001557F8;
extern float D_001557FC;
extern float D_00155800;
extern float D_00155804;
extern char D_001557A8[];
extern char D_001557D0[];
extern Chunk D_001CBD70[];

extern unsigned int func_06C668(int a);
extern long long func_087280(void);
extern Obj *func_06C558(int a);
extern Pad *func_06C590(int a);
extern int func_023BC8(int a);
extern void func_0A5A70(int *a, int *b);
extern long long func_087220(void);
extern int func_096530(int a);
extern void func_016A10(int a, int b);
extern int func_09D0C8(int a);
extern void func_0932E8(char *a);
extern int func_093380(char *a);
extern int func_083DF0(int a, int b, int c);

void func_0A5D38(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_06C668(0x6B10);
    if (func_087280() != 0) {
        o = func_06C558(0x6B10);
        p = func_06C590(0x6B10);
        sy = (int)(p->x * D_00155814);
        sx = (int)(p->y * D_00155814);
        if (func_023BC8(4) != 0)
            sy = -sy;
        D_00155798 = D_00155798 - sy;
        D_0015579C = D_0015579C - sx;
        func_0A5A70(&D_00155798, &D_0015579C);
        if (o->bits & 0x8000) {
            D_001557F8 = D_001557F8 + D_001557FC;
            if (D_001557F8 > D_00155800)
                D_001557F8 = D_00155800;
        } else if (o->bits & 0x2000) {
            D_001557F8 = D_001557F8 - D_001557FC;
            if (D_001557F8 < D_00155804)
                D_001557F8 = D_00155804;
        }
    }
    if ((mode & 0x81009) != 0 || func_087220() == 0) {
        func_096530(7);
        func_016A10(4, 0);
    } else if (mode & 0x4000) {
        func_096530(6);
        func_09D0C8(15);
    }
    func_0932E8(D_001557A8);
    q = D_001557D0;
    func_0932E8(q);
    r = func_093380(q);
    func_083DF0(D_001CBD70[6].h, 5, r);
}
