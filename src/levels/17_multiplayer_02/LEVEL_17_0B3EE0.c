/* LEVEL_17:0x0B3EE0 -- placement copy of LEVEL_16_0B49A0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;

extern float D_001A220C;
extern int D_001A2190;
extern int D_001A2194;
extern float D_001A21F0;
extern float D_001A21F4;
extern float D_001A21F8;
extern float D_001A21FC;
extern char D_001A21A0[];
extern char D_001A21C8[];

extern unsigned int func_079F40(int a);
extern int func_094E28(void);
extern Obj *func_079E30(int a);
extern Pad *func_079E68(int a);
extern int func_0277B8(int a);
extern void func_0B3E78(int *a, int *b);
extern int func_094E08(void);
extern int func_0A4590(int a);
extern void func_018518(int a, int b);
extern int func_0AB448(int a);
extern void func_0A0880(char *a);

void func_0B3EE0(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;

    mode = func_079F40(0x6B10);
    if (func_094E28() != 0) {
        o = func_079E30(0x6B10);
        p = func_079E68(0x6B10);
        sy = (int)(p->x * D_001A220C);
        sx = (int)(p->y * D_001A220C);
        if (func_0277B8(4) != 0)
            sy = -sy;
        D_001A2190 = D_001A2190 - sy;
        D_001A2194 = D_001A2194 - sx;
        func_0B3E78(&D_001A2190, &D_001A2194);
        if (o->bits & 0x8000) {
            D_001A21F0 = D_001A21F0 + D_001A21F4;
            if (D_001A21F0 > D_001A21F8)
                D_001A21F0 = D_001A21F8;
        } else if (o->bits & 0x2000) {
            D_001A21F0 = D_001A21F0 - D_001A21F4;
            if (D_001A21F0 < D_001A21FC)
                D_001A21F0 = D_001A21FC;
        }
    }
    if ((mode & 0x81009) != 0 || func_094E08() == 0) {
        func_0A4590(7);
        func_018518(4, 0);
    } else if (mode & 0x4000) {
        func_0A4590(6);
        func_0AB448(15);
    }
    func_0A0880(D_001A21A0);
    func_0A0880(D_001A21C8);
}
