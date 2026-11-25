/* LEVEL_04:0x0DBDC0 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00347808;
extern char D_0021EAA8[];
extern Rect D_0022E2C0;
extern Pair D_0021FAB0[];
extern Glob *D_0020D12C;

extern int func_0BF318(Obj *o, char *src, int a, int b);
extern int func_0BF670(Obj *o, int a, int b, int c, int d);
extern int func_0BF658(Obj *o, int a, unsigned int b);
extern int func_0BF178(Obj *o, unsigned int a, unsigned int b);
extern int func_0BF258(Obj *o, int a, int b);
extern void func_0BFA48(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_027380(unsigned int i);
extern int func_0BF3F0(Obj *o);

void func_0DBDC0(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0BF318(&D_00347808, D_0021EAA8, 0x1000, 0);
    r = D_0022E2C0;
    i = 0;
    func_0BF670(&D_00347808, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0BF658(&D_00347808, 0x1D7, 0xFFFFFFFF);
    func_0BF178(&D_00347808, 0x40602020, 0xFFB07050);
    pb = D_0021FAB0;
    q = &pb->b;
    do {
        if (D_0020D12C->sel != q[0] && func_027380(q[0]) != 0) {
            func_0BF258(&D_00347808, 1, 1);
            func_0BFA48(&D_00347808, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00347808.flags_14 |= 0x14;
    func_0BF3F0(&D_00347808);
}
