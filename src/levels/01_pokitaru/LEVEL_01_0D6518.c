/* LEVEL_01:0x0D6518 -- sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_0032D008;
extern char D_002055E8[];
extern Rect D_00214940;
extern Pair D_002065F0[];
extern Glob *D_001F3FAC;

extern int func_0B9B38(Obj *o, char *src, int a, int b);
extern int func_0B9E90(Obj *o, int a, int b, int c, int d);
extern int func_0B9E78(Obj *o, int a, unsigned int b);
extern int func_0B9998(Obj *o, unsigned int a, unsigned int b);
extern int func_0B9A78(Obj *o, int a, int b);
extern void func_0BA268(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0276F0(unsigned int i);
extern int func_0B9C10(Obj *o);

void func_0D6518(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0B9B38(&D_0032D008, D_002055E8, 0x1000, 0);
    r = D_00214940;
    i = 0;
    func_0B9E90(&D_0032D008, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0B9E78(&D_0032D008, 0x1D7, 0xFFFFFFFF);
    func_0B9998(&D_0032D008, 0x40602020, 0xFFB07050);
    pb = D_002065F0;
    q = &pb->b;
    do {
        if (D_001F3FAC->sel != q[0] && func_0276F0(q[0]) != 0) {
            func_0B9A78(&D_0032D008, 1, 1);
            func_0BA268(&D_0032D008, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_0032D008.flags_14 |= 0x14;
    func_0B9C10(&D_0032D008);
}
