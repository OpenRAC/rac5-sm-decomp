/* LEVEL_06:0x0D0E18 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_00319D88;
extern char D_001F44E8[];
extern Rect D_002037C0;
extern Pair D_001F54F0[];
extern Glob *D_001E2EAC;

extern int func_0B4438(Obj *o, char *src, int a, int b);
extern int func_0B4790(Obj *o, int a, int b, int c, int d);
extern int func_0B4778(Obj *o, int a, unsigned int b);
extern int func_0B4298(Obj *o, unsigned int a, unsigned int b);
extern int func_0B4378(Obj *o, int a, int b);
extern void func_0B4B68(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_025BA0(unsigned int i);
extern int func_0B4510(Obj *o);

void func_0D0E18(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0B4438(&D_00319D88, D_001F44E8, 0x1000, 0);
    r = D_002037C0;
    i = 0;
    func_0B4790(&D_00319D88, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0B4778(&D_00319D88, 0x1D7, 0xFFFFFFFF);
    func_0B4298(&D_00319D88, 0x40602020, 0xFFB07050);
    pb = D_001F54F0;
    q = &pb->b;
    do {
        if (D_001E2EAC->sel != q[0] && func_025BA0(q[0]) != 0) {
            func_0B4378(&D_00319D88, 1, 1);
            func_0B4B68(&D_00319D88, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_00319D88.flags_14 |= 0x14;
    func_0B4510(&D_00319D88);
}
