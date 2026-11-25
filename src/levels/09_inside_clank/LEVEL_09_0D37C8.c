/* LEVEL_09:0x0D37C8 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00314788;
extern char D_001EF3E8[];
extern Rect D_001FE540;
extern Pair D_001F03F0[];
extern Glob *D_001DDDAC;

extern int func_0B6DE8(Obj *o, char *src, int a, int b);
extern int func_0B7140(Obj *o, int a, int b, int c, int d);
extern int func_0B7128(Obj *o, int a, unsigned int b);
extern int func_0B6C48(Obj *o, unsigned int a, unsigned int b);
extern int func_0B6D28(Obj *o, int a, int b);
extern void func_0B7518(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0266F8(unsigned int i);
extern int func_0B6EC0(Obj *o);

void func_0D37C8(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0B6DE8(&D_00314788, D_001EF3E8, 0x1000, 0);
    r = D_001FE540;
    i = 0;
    func_0B7140(&D_00314788, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0B7128(&D_00314788, 0x1D7, 0xFFFFFFFF);
    func_0B6C48(&D_00314788, 0x40602020, 0xFFB07050);
    pb = D_001F03F0;
    q = &pb->b;
    do {
        if (D_001DDDAC->sel != q[0] && func_0266F8(q[0]) != 0) {
            func_0B6D28(&D_00314788, 1, 1);
            func_0B7518(&D_00314788, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00314788.flags_14 |= 0x14;
    func_0B6EC0(&D_00314788);
}
