/* LEVEL_07:0x0C5590 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

struct Rect0C3530 {
    short x;
    short p0;
    short y;
    short p1;
    short w;
    short p2;
    short h;
    short p3;
};

struct Panel0C3530 {
    char pad00[0x14];
    unsigned int flags;
};

extern struct Panel0C3530 D_0033E980;
extern char D_00213308[];

extern void func_0BBB98(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0B0708(int id, struct Rect0C3530 *r, float f);
extern void func_0BBEF0(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0BBED8(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0BB9F8(char *object, int first, int second);
extern int func_027A50(unsigned int i);
extern int func_0C4380(unsigned int i);
extern int func_0BBAD8(struct Panel0C3530 *p, int a, int b);
extern int func_134E80(unsigned int i, int z);
extern int func_0BC2A0(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0BBC70(struct Panel0C3530 *p);

void func_0C5590(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0BBB98(&D_0033E980, D_00213308, 0x1000, 0);
    func_0B0708(0x1EC, &r, 0.0f);
    func_0BBEF0(&D_0033E980, r.x, r.y, r.w, r.h);
    func_0BBED8(&D_0033E980, 0x1ED, 0xFFFFFFFF);
    func_0BB9F8(&D_0033E980, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_027A50(i)) {
            if (func_0C4380(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0BBAD8(&D_0033E980, 1, 1);
            func_0BC2A0(&D_0033E980, func_134E80(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_0033E980.flags |= 0x14;
    func_0BBC70(&D_0033E980);
}
