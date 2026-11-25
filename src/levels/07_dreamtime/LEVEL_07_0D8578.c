/* LEVEL_07:0x0D8578 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00342908;
extern char D_002198E8[];
extern Rect D_00229640;
extern Pair D_0021A8F0[];
extern Glob *D_002082AC;

extern int func_0BBB98(Obj *o, char *src, int a, int b);
extern int func_0BBEF0(Obj *o, int a, int b, int c, int d);
extern int func_0BBED8(Obj *o, int a, unsigned int b);
extern int func_0BB9F8(Obj *o, unsigned int a, unsigned int b);
extern int func_0BBAD8(Obj *o, int a, int b);
extern void func_0BC2C8(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_027A50(unsigned int i);
extern int func_0BBC70(Obj *o);

void func_0D8578(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0BBB98(&D_00342908, D_002198E8, 0x1000, 0);
    r = D_00229640;
    i = 0;
    func_0BBEF0(&D_00342908, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0BBED8(&D_00342908, 0x1D7, 0xFFFFFFFF);
    func_0BB9F8(&D_00342908, 0x40602020, 0xFFB07050);
    pb = D_0021A8F0;
    q = &pb->b;
    do {
        if (D_002082AC->sel != q[0] && func_027A50(q[0]) != 0) {
            func_0BBAD8(&D_00342908, 1, 1);
            func_0BC2C8(&D_00342908, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00342908.flags_14 |= 0x14;
    func_0BBC70(&D_00342908);
}
