/* LEVEL_03:0x0D6300 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00347E88;
extern char D_0021DC68[];
extern Rect D_0022D840;
extern Pair D_0021EC70[];
extern Glob *D_0020C62C;

extern int func_0B9920(Obj *o, char *src, int a, int b);
extern int func_0B9C78(Obj *o, int a, int b, int c, int d);
extern int func_0B9C60(Obj *o, int a, unsigned int b);
extern int func_0B9780(Obj *o, unsigned int a, unsigned int b);
extern int func_0B9860(Obj *o, int a, int b);
extern void func_0BA050(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0275D0(unsigned int i);
extern int func_0B99F8(Obj *o);

void func_0D6300(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0B9920(&D_00347E88, D_0021DC68, 0x1000, 0);
    r = D_0022D840;
    i = 0;
    func_0B9C78(&D_00347E88, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0B9C60(&D_00347E88, 0x1D7, 0xFFFFFFFF);
    func_0B9780(&D_00347E88, 0x40602020, 0xFFB07050);
    pb = D_0021EC70;
    q = &pb->b;
    do {
        if (D_0020C62C->sel != q[0] && func_0275D0(q[0]) != 0) {
            func_0B9860(&D_00347E88, 1, 1);
            func_0BA050(&D_00347E88, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00347E88.flags_14 |= 0x14;
    func_0B99F8(&D_00347E88);
}
