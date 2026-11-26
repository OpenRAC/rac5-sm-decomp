/* LEVEL_08:0x0E14D0 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_0037C288;
extern char D_0024E4A8[];
extern Rect D_0025E5C0;
extern Pair D_0024F4B0[];
extern Glob *D_0023CB2C;

extern int func_0C4A28(Obj *o, char *src, int a, int b);
extern int func_0C4D80(Obj *o, int a, int b, int c, int d);
extern int func_0C4D68(Obj *o, int a, unsigned int b);
extern int func_0C4888(Obj *o, unsigned int a, unsigned int b);
extern int func_0C4968(Obj *o, int a, int b);
extern void func_0C5158(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_027D18(unsigned int i);
extern int func_0C4B00(Obj *o);

void func_0E14D0(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0C4A28(&D_0037C288, D_0024E4A8, 0x1000, 0);
    r = D_0025E5C0;
    i = 0;
    func_0C4D80(&D_0037C288, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0C4D68(&D_0037C288, 0x1D7, 0xFFFFFFFF);
    func_0C4888(&D_0037C288, 0x40602020, 0xFFB07050);
    pb = D_0024F4B0;
    q = &pb->b;
    do {
        if (D_0023CB2C->sel != q[0] && func_027D18(q[0]) != 0) {
            func_0C4968(&D_0037C288, 1, 1);
            func_0C5158(&D_0037C288, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_0037C288.flags_14 |= 0x14;
    func_0C4B00(&D_0037C288);
}
