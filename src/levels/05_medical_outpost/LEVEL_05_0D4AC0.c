/* LEVEL_05:0x0D4AC0 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00318EC8;
extern char D_001F4968[];
extern Rect D_00203840;
extern Pair D_001F5970[];
extern Glob *D_001E332C;

extern int func_0B80E0(Obj *o, char *src, int a, int b);
extern int func_0B8438(Obj *o, int a, int b, int c, int d);
extern int func_0B8420(Obj *o, int a, unsigned int b);
extern int func_0B7F40(Obj *o, unsigned int a, unsigned int b);
extern int func_0B8020(Obj *o, int a, int b);
extern void func_0B8810(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_026430(unsigned int i);
extern int func_0B81B8(Obj *o);

void func_0D4AC0(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0B80E0(&D_00318EC8, D_001F4968, 0x1000, 0);
    r = D_00203840;
    i = 0;
    func_0B8438(&D_00318EC8, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0B8420(&D_00318EC8, 0x1D7, 0xFFFFFFFF);
    func_0B7F40(&D_00318EC8, 0x40602020, 0xFFB07050);
    pb = D_001F5970;
    q = &pb->b;
    do {
        if (D_001E332C->sel != q[0] && func_026430(q[0]) != 0) {
            func_0B8020(&D_00318EC8, 1, 1);
            func_0B8810(&D_00318EC8, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00318EC8.flags_14 |= 0x14;
    func_0B81B8(&D_00318EC8);
}
