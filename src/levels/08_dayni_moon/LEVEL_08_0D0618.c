/* LEVEL_08:0x0D0618 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_00249A54;
extern int D_002499D8;
extern int D_002499DC;
extern float D_00249A38;
extern float D_00249A3C;
extern float D_00249A40;
extern float D_00249A44;
extern char D_002499E8[];
extern char D_00249A10[];
extern Chunk D_00302FB0[];

extern unsigned int func_08FFD8(int a);
extern long long func_0B12B0(void);
extern Obj *func_08FEC8(int a);
extern Pad *func_08FF00(int a);
extern int func_02A968(int a);
extern void func_0D0350(int *a, int *b);
extern long long func_0B1250(void);
extern int func_0C0F10(int a);
extern void func_01B1A0(int a, int b);
extern int func_0C79A8(int a);
extern void func_0BD6B8(char *a);
extern int func_0BD750(char *a);
extern int func_0ADDF0(int a, int b, int c);

void func_0D0618(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_08FFD8(0x6B10);
    if (func_0B12B0() != 0) {
        o = func_08FEC8(0x6B10);
        p = func_08FF00(0x6B10);
        sy = (int)(p->x * D_00249A54);
        sx = (int)(p->y * D_00249A54);
        if (func_02A968(4) != 0)
            sy = -sy;
        D_002499D8 = D_002499D8 - sy;
        D_002499DC = D_002499DC - sx;
        func_0D0350(&D_002499D8, &D_002499DC);
        if (o->bits & 0x8000) {
            D_00249A38 = D_00249A38 + D_00249A3C;
            if (D_00249A38 > D_00249A40)
                D_00249A38 = D_00249A40;
        } else if (o->bits & 0x2000) {
            D_00249A38 = D_00249A38 - D_00249A3C;
            if (D_00249A38 < D_00249A44)
                D_00249A38 = D_00249A44;
        }
    }
    if ((mode & 0x81009) != 0 || func_0B1250() == 0) {
        func_0C0F10(7);
        func_01B1A0(4, 0);
    } else if (mode & 0x4000) {
        func_0C0F10(6);
        func_0C79A8(15);
    }
    func_0BD6B8(D_002499E8);
    q = D_00249A10;
    func_0BD6B8(q);
    r = func_0BD750(q);
    func_0ADDF0(D_00302FB0[6].h, 5, r);
}
