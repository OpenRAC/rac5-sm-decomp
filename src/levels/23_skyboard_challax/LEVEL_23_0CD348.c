/* LEVEL_23:0x0CD348 -- placement copy of LEVEL_01_0D6518.c: sets up a scene object, applies a rectangle and colours, then queues the eleven entries whose id differs from the current selection and passes the object's flag word before finishing. */
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

extern Obj D_002FE448;
extern char D_001D89E8[];
extern Rect D_001E7AC0;
extern Pair D_001D99F0[];
extern Glob *D_001C73AC;

extern int func_0B08D0(Obj *o, char *src, int a, int b);
extern int func_0B0C28(Obj *o, int a, int b, int c, int d);
extern int func_0B0C10(Obj *o, int a, unsigned int b);
extern int func_0B0730(Obj *o, unsigned int a, unsigned int b);
extern int func_0B0810(Obj *o, int a, int b);
extern void func_0B1000(Obj *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_025448(unsigned int i);
extern int func_0B09A8(Obj *o);

void func_0CD348(void)
{
    Rect r;
    unsigned int *q;
    Pair *pb;
    unsigned int i;

    func_0B08D0(&D_002FE448, D_001D89E8, 0x1000, 0);
    r = D_001E7AC0;
    i = 0;
    func_0B0C28(&D_002FE448, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_0B0C10(&D_002FE448, 0x1D7, 0xFFFFFFFF);
    func_0B0730(&D_002FE448, 0x40602020, 0xFFB07050);
    pb = D_001D99F0;
    q = &pb->b;
    do {
        if (D_001C73AC->sel != q[0] && func_025448(q[0]) != 0) {
            func_0B0810(&D_002FE448, 1, 1);
            func_0B1000(&D_002FE448, q[-1], q[0], 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        }
        i++;
        q += 2;
    } while (i < 11);
    D_002FE448.flags_14 |= 0x14;
    func_0B09A8(&D_002FE448);
}
