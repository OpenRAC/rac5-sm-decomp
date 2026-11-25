/* LEVEL_02:0x0DCEA8 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
typedef struct {
    char pad_00[0x14];
    unsigned int flags_14;
} Obj;

typedef struct {
    short v[8];
} Rect;

typedef struct {
    unsigned int a;
    unsigned int b;
} Pair;

typedef struct {
    char pad_00[0x1C6C];
    unsigned int sel;
} Glob;

extern Obj D_00344508;
extern char D_0021A5A8[];
extern Rect D_002298C0;
extern Pair D_0021B5B0[];
extern Glob *D_00208C2C;

extern int func_0C0448(Obj *o, char *src, int a, int b);
extern int func_0C07A0(Obj *o, int a, int b, int c, int d);
extern int func_0C0788(Obj *o, int a, unsigned int b);
extern int func_0C02A8(Obj *o, unsigned int a, unsigned int b);
extern int func_0C0388(Obj *o, int a, int b);
extern void func_0C0B78(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_027ED8(unsigned int i);
extern int func_0C0520(Obj *o);

void func_0DCEA8(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0C0448(&D_00344508, D_0021A5A8, 0x1000, 0);
    r = D_002298C0;
    i = 0;
    func_0C07A0(&D_00344508, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0C0788(&D_00344508, 0x1D7, 0xFFFFFFFF);
    func_0C02A8(&D_00344508, 0x40602020, 0xFFB07050);
    pb = D_0021B5B0;
    q = &pb->b;
    do {
        if (D_00208C2C->sel != q[0] && func_027ED8(q[0]) != 0) {
            func_0C0388(&D_00344508, 1, 1);
            func_0C0B78(&D_00344508, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00344508.flags_14 |= 0x14;
    func_0C0520(&D_00344508);
}
