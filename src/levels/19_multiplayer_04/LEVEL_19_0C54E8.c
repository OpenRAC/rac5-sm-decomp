/* LEVEL_19:0x0C54E8 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_0027B208;
extern char D_001B4618[];
extern Rect D_001CAA00;
extern Pair D_001B5620[];
extern Glob *D_001A2C34;

extern int func_0A8460(Obj *o, char *src, int a, int b);
extern int func_0A87B8(Obj *o, int a, int b, int c, int d);
extern int func_0A87A0(Obj *o, int a, unsigned int b);
extern int func_0A82C0(Obj *o, unsigned int a, unsigned int b);
extern int func_0A83A0(Obj *o, int a, int b);
extern void func_0A8B90(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_024D78(unsigned int i);
extern int func_0A8538(Obj *o);

void func_0C54E8(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0A8460(&D_0027B208, D_001B4618, 0x1000, 0);
    r = D_001CAA00;
    i = 0;
    func_0A87B8(&D_0027B208, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0A87A0(&D_0027B208, 0x1D7, 0xFFFFFFFF);
    func_0A82C0(&D_0027B208, 0x40602020, 0xFFB07050);
    pb = D_001B5620;
    q = &pb->b;
    do {
        if (D_001A2C34->sel != q[0] && func_024D78(q[0]) != 0) {
            func_0A83A0(&D_0027B208, 1, 1);
            func_0A8B90(&D_0027B208, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_0027B208.flags_14 |= 0x14;
    func_0A8538(&D_0027B208);
}
