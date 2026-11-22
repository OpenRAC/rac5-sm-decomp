/* LEVEL_23:0x0BC490 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_001D3F94;
extern int D_001D3F18;
extern int D_001D3F1C;
extern float D_001D3F78;
extern float D_001D3F7C;
extern float D_001D3F80;
extern float D_001D3F84;
extern char D_001D3F28[];
extern char D_001D3F50[];
extern Chunk D_00285170[];

extern unsigned int func_07DE48(int a);
extern int func_09D728(void);
extern Obj *func_07DD38(int a);
extern Pad *func_07DD70(int a);
extern int func_027F60(int a);
extern void func_0BC1C8(int *a, int *b);
extern int func_09D6C8(void);
extern int func_0ACDE8(int a);
extern void func_019338(int a, int b);
extern int func_0B3820(int a);
extern void func_0A9800(char *a);
extern int func_0A9898(char *a);
extern int func_09A238(int a, int b, int c);

void func_0BC490(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_07DE48(0x6B10);
    if (func_09D728() != 0) {
        o = func_07DD38(0x6B10);
        p = func_07DD70(0x6B10);
        sy = (int)(p->x * D_001D3F94);
        sx = (int)(p->y * D_001D3F94);
        if (func_027F60(4) != 0)
            sy = -sy;
        D_001D3F18 = D_001D3F18 - sy;
        D_001D3F1C = D_001D3F1C - sx;
        func_0BC1C8(&D_001D3F18, &D_001D3F1C);
        if (o->bits & 0x8000) {
            D_001D3F78 = D_001D3F78 + D_001D3F7C;
            if (D_001D3F78 > D_001D3F80)
                D_001D3F78 = D_001D3F80;
        } else if (o->bits & 0x2000) {
            D_001D3F78 = D_001D3F78 - D_001D3F7C;
            if (D_001D3F78 < D_001D3F84)
                D_001D3F78 = D_001D3F84;
        }
    }
    if ((mode & 0x81009) != 0 || func_09D6C8() == 0) {
        func_0ACDE8(7);
        func_019338(4, 0);
    } else if (mode & 0x4000) {
        func_0ACDE8(6);
        func_0B3820(15);
    }
    func_0A9800(D_001D3F28);
    q = D_001D3F50;
    func_0A9800(q);
    r = func_0A9898(q);
    func_09A238(D_00285170[6].h, 5, r);
}
