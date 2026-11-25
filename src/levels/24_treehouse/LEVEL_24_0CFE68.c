/* LEVEL_24:0x0CFE68 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_002F8EC8;
extern char D_001D6268[];
extern Rect D_001E56C0;
extern Pair D_001D7270[];
extern Glob *D_001C4C2C;

extern int func_0B33C8(Obj *o, char *src, int a, int b);
extern int func_0B3720(Obj *o, int a, int b, int c, int d);
extern int func_0B3708(Obj *o, int a, unsigned int b);
extern int func_0B3228(Obj *o, unsigned int a, unsigned int b);
extern int func_0B3308(Obj *o, int a, int b);
extern void func_0B3AF8(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_025020(unsigned int i);
extern int func_0B34A0(Obj *o);

void func_0CFE68(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0B33C8(&D_002F8EC8, D_001D6268, 0x1000, 0);
    r = D_001E56C0;
    i = 0;
    func_0B3720(&D_002F8EC8, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0B3708(&D_002F8EC8, 0x1D7, 0xFFFFFFFF);
    func_0B3228(&D_002F8EC8, 0x40602020, 0xFFB07050);
    pb = D_001D7270;
    q = &pb->b;
    do {
        if (D_001C4C2C->sel != q[0] && func_025020(q[0]) != 0) {
            func_0B3308(&D_002F8EC8, 1, 1);
            func_0B3AF8(&D_002F8EC8, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_002F8EC8.flags_14 |= 0x14;
    func_0B34A0(&D_002F8EC8);
}
