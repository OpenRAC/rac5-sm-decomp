/* LEVEL_22:0x0C4A58 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00282BC8;
extern char D_00164968[];
extern Rect D_00171DC0;
extern Pair D_00165970[];
extern Glob *D_0015332C;

extern int func_0A7FE0(Obj *o, char *src, int a, int b);
extern int func_0A8338(Obj *o, int a, int b, int c, int d);
extern int func_0A8320(Obj *o, int a, unsigned int b);
extern int func_0A7E40(Obj *o, unsigned int a, unsigned int b);
extern int func_0A7F20(Obj *o, int a, int b);
extern void func_0A8710(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_022080(unsigned int i);
extern int func_0A80B8(Obj *o);

void func_0C4A58(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0A7FE0(&D_00282BC8, D_00164968, 0x1000, 0);
    r = D_00171DC0;
    i = 0;
    func_0A8338(&D_00282BC8, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0A8320(&D_00282BC8, 0x1D7, 0xFFFFFFFF);
    func_0A7E40(&D_00282BC8, 0x40602020, 0xFFB07050);
    pb = D_00165970;
    q = &pb->b;
    do {
        if (D_0015332C->sel != q[0] && func_022080(q[0]) != 0) {
            func_0A7F20(&D_00282BC8, 1, 1);
            func_0A8710(&D_00282BC8, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00282BC8.flags_14 |= 0x14;
    func_0A80B8(&D_00282BC8);
}
