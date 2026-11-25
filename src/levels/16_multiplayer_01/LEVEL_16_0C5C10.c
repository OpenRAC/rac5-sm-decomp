/* LEVEL_16:0x0C5C10 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_0027B088;
extern char D_001B3498[];
extern Rect D_001C9800;
extern Pair D_001B44A0[];
extern Glob *D_001A1AB4;

extern int func_0A8B88(Obj *o, char *src, int a, int b);
extern int func_0A8EE0(Obj *o, int a, int b, int c, int d);
extern int func_0A8EC8(Obj *o, int a, unsigned int b);
extern int func_0A89E8(Obj *o, unsigned int a, unsigned int b);
extern int func_0A8AC8(Obj *o, int a, int b);
extern void func_0A92B8(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0251D0(unsigned int i);
extern int func_0A8C60(Obj *o);

void func_0C5C10(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0A8B88(&D_0027B088, D_001B3498, 0x1000, 0);
    r = D_001C9800;
    i = 0;
    func_0A8EE0(&D_0027B088, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0A8EC8(&D_0027B088, 0x1D7, 0xFFFFFFFF);
    func_0A89E8(&D_0027B088, 0x40602020, 0xFFB07050);
    pb = D_001B44A0;
    q = &pb->b;
    do {
        if (D_001A1AB4->sel != q[0] && func_0251D0(q[0]) != 0) {
            func_0A8AC8(&D_0027B088, 1, 1);
            func_0A92B8(&D_0027B088, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_0027B088.flags_14 |= 0x14;
    func_0A8C60(&D_0027B088);
}
