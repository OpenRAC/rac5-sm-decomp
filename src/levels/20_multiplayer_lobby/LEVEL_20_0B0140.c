/* LEVEL_20:0x0B0140 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_0019E8C8;
extern char D_00115B78[];
extern Rect D_0012A880;
extern Pair D_00116B80[];
extern Glob *D_00104194;

extern int func_0930B8(Obj *o, char *src, int a, int b);
extern int func_093410(Obj *o, int a, int b, int c, int d);
extern int func_0933F8(Obj *o, int a, unsigned int b);
extern int func_092F18(Obj *o, unsigned int a, unsigned int b);
extern int func_092FF8(Obj *o, int a, int b);
extern void func_0937E8(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_021D48(unsigned int i);
extern int func_093190(Obj *o);

void func_0B0140(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0930B8(&D_0019E8C8, D_00115B78, 0x1000, 0);
    r = D_0012A880;
    i = 0;
    func_093410(&D_0019E8C8, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0933F8(&D_0019E8C8, 0x1D7, 0xFFFFFFFF);
    func_092F18(&D_0019E8C8, 0x40602020, 0xFFB07050);
    pb = D_00116B80;
    q = &pb->b;
    do {
        if (D_00104194->sel != q[0] && func_021D48(q[0]) != 0) {
            func_092FF8(&D_0019E8C8, 1, 1);
            func_0937E8(&D_0019E8C8, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_0019E8C8.flags_14 |= 0x14;
    func_093190(&D_0019E8C8);
}
