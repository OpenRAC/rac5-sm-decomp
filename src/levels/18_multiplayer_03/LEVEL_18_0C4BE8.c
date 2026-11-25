/* LEVEL_18:0x0C4BE8 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_0027B408;
extern char D_001B4918[];
extern Rect D_001CAD80;
extern Pair D_001B5920[];
extern Glob *D_001A2F34;

extern int func_0A7B60(Obj *o, char *src, int a, int b);
extern int func_0A7EB8(Obj *o, int a, int b, int c, int d);
extern int func_0A7EA0(Obj *o, int a, unsigned int b);
extern int func_0A79C0(Obj *o, unsigned int a, unsigned int b);
extern int func_0A7AA0(Obj *o, int a, int b);
extern void func_0A8290(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_024780(unsigned int i);
extern int func_0A7C38(Obj *o);

void func_0C4BE8(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0A7B60(&D_0027B408, D_001B4918, 0x1000, 0);
    r = D_001CAD80;
    i = 0;
    func_0A7EB8(&D_0027B408, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0A7EA0(&D_0027B408, 0x1D7, 0xFFFFFFFF);
    func_0A79C0(&D_0027B408, 0x40602020, 0xFFB07050);
    pb = D_001B5920;
    q = &pb->b;
    do {
        if (D_001A2F34->sel != q[0] && func_024780(q[0]) != 0) {
            func_0A7AA0(&D_0027B408, 1, 1);
            func_0A8290(&D_0027B408, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_0027B408.flags_14 |= 0x14;
    func_0A7C38(&D_0027B408);
}
