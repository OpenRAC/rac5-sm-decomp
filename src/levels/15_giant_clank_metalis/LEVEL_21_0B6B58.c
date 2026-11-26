/* LEVEL_21:0x0B6B58 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00244848;
extern char D_0015A268[];
extern Rect D_001690C0;
extern Pair D_0015B270[];
extern Glob *D_00148C2C;

extern int func_09A180(Obj *o, char *src, int a, int b);
extern int func_09A4D8(Obj *o, int a, int b, int c, int d);
extern int func_09A4C0(Obj *o, int a, unsigned int b);
extern int func_099FE0(Obj *o, unsigned int a, unsigned int b);
extern int func_09A0C0(Obj *o, int a, int b);
extern void func_09A8B0(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0216E0(unsigned int i);
extern int func_09A258(Obj *o);

void func_0B6B58(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_09A180(&D_00244848, D_0015A268, 0x1000, 0);
    r = D_001690C0;
    i = 0;
    func_09A4D8(&D_00244848, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_09A4C0(&D_00244848, 0x1D7, 0xFFFFFFFF);
    func_099FE0(&D_00244848, 0x40602020, 0xFFB07050);
    pb = D_0015B270;
    q = &pb->b;
    do {
        if (D_00148C2C->sel != q[0] && func_0216E0(q[0]) != 0) {
            func_09A0C0(&D_00244848, 1, 1);
            func_09A8B0(&D_00244848, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00244848.flags_14 |= 0x14;
    func_09A258(&D_00244848);
}
