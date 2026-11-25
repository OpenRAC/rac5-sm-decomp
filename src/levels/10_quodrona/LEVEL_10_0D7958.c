/* LEVEL_10:0x0D7958 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00336408;
extern char D_0020E5E8[];
extern Rect D_0021D8C0;
extern Pair D_0020F5F0[];
extern Glob *D_001FCFAC;

extern int func_0BAE80(Obj *o, char *src, int a, int b);
extern int func_0BB1D8(Obj *o, int a, int b, int c, int d);
extern int func_0BB1C0(Obj *o, int a, unsigned int b);
extern int func_0BACE0(Obj *o, unsigned int a, unsigned int b);
extern int func_0BADC0(Obj *o, int a, int b);
extern void func_0BB5B0(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_026FD0(unsigned int i);
extern int func_0BAF58(Obj *o);

void func_0D7958(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0BAE80(&D_00336408, D_0020E5E8, 0x1000, 0);
    r = D_0021D8C0;
    i = 0;
    func_0BB1D8(&D_00336408, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0BB1C0(&D_00336408, 0x1D7, 0xFFFFFFFF);
    func_0BACE0(&D_00336408, 0x40602020, 0xFFB07050);
    pb = D_0020F5F0;
    q = &pb->b;
    do {
        if (D_001FCFAC->sel != q[0] && func_026FD0(q[0]) != 0) {
            func_0BADC0(&D_00336408, 1, 1);
            func_0BB5B0(&D_00336408, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00336408.flags_14 |= 0x14;
    func_0BAF58(&D_00336408);
}
