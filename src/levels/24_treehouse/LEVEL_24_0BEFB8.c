/* LEVEL_24:0x0BEFB8 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_001D1814;
extern int D_001D1798;
extern int D_001D179C;
extern float D_001D17F8;
extern float D_001D17FC;
extern float D_001D1800;
extern float D_001D1804;
extern char D_001D17A8[];
extern char D_001D17D0[];
extern Chunk D_0027FBF0[];

extern unsigned int func_081228(int a);
extern int func_0A0230(void);
extern Obj *func_081118(int a);
extern Pad *func_081150(int a);
extern int func_027930(int a);
extern void func_0BECF0(int *a, int *b);
extern int func_0A01D0(void);
extern int func_0AF8B0(int a);
extern void func_018E18(int a, int b);
extern int func_0B6348(int a);
extern void func_0AC298(char *a);
extern int func_0AC330(char *a);
extern int func_09CD70(int a, int b, int c);

void func_0BEFB8(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_081228(0x6B10);
    if (func_0A0230() != 0) {
        o = func_081118(0x6B10);
        p = func_081150(0x6B10);
        sy = (int)(p->x * D_001D1814);
        sx = (int)(p->y * D_001D1814);
        if (func_027930(4) != 0)
            sy = -sy;
        D_001D1798 = D_001D1798 - sy;
        D_001D179C = D_001D179C - sx;
        func_0BECF0(&D_001D1798, &D_001D179C);
        if (o->bits & 0x8000) {
            D_001D17F8 = D_001D17F8 + D_001D17FC;
            if (D_001D17F8 > D_001D1800)
                D_001D17F8 = D_001D1800;
        } else if (o->bits & 0x2000) {
            D_001D17F8 = D_001D17F8 - D_001D17FC;
            if (D_001D17F8 < D_001D1804)
                D_001D17F8 = D_001D1804;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A01D0() == 0) {
        func_0AF8B0(7);
        func_018E18(4, 0);
    } else if (mode & 0x4000) {
        func_0AF8B0(6);
        func_0B6348(15);
    }
    func_0AC298(D_001D17A8);
    q = D_001D17D0;
    func_0AC298(q);
    r = func_0AC330(q);
    func_09CD70(D_0027FBF0[6].h, 5, r);
}
