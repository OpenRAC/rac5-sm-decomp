/* LEVEL_17:0x0C5150 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_0026C388;
extern char D_001A6A98[];
extern Rect D_001BCC80;
extern Pair D_001A7AA0[];
extern Glob *D_001950B4;

extern int func_0A80C8(Obj *o, char *src, int a, int b);
extern int func_0A8420(Obj *o, int a, int b, int c, int d);
extern int func_0A8408(Obj *o, int a, unsigned int b);
extern int func_0A7F28(Obj *o, unsigned int a, unsigned int b);
extern int func_0A8008(Obj *o, int a, int b);
extern void func_0A87F8(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_024B50(unsigned int i);
extern int func_0A81A0(Obj *o);

void func_0C5150(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0A80C8(&D_0026C388, D_001A6A98, 0x1000, 0);
    r = D_001BCC80;
    i = 0;
    func_0A8420(&D_0026C388, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0A8408(&D_0026C388, 0x1D7, 0xFFFFFFFF);
    func_0A7F28(&D_0026C388, 0x40602020, 0xFFB07050);
    pb = D_001A7AA0;
    q = &pb->b;
    do {
        if (D_001950B4->sel != q[0] && func_024B50(q[0]) != 0) {
            func_0A8008(&D_0026C388, 1, 1);
            func_0A87F8(&D_0026C388, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_0026C388.flags_14 |= 0x14;
    func_0A81A0(&D_0026C388);
}
