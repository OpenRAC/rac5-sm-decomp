/* LEVEL_10:0x0C4880 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00332480;
extern char D_00208008[];

extern void func_0BAE80(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0AF820(int id, struct Rect0C3530 *r, float f);
extern void func_0BB1D8(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0BB1C0(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0BACE0(char *object, int first, int second);
extern int func_026FD0(unsigned int i);
extern int func_0C3670(unsigned int i);
extern int func_0BADC0(struct Panel0C3530 *p, int a, int b);
extern int func_12FCE0(unsigned int i, int z);
extern int func_0BB588(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0BAF58(struct Panel0C3530 *p);

void func_0C4880(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0BAE80(&D_00332480, D_00208008, 0x1000, 0);
    func_0AF820(0x1EC, &r, 0.0f);
    func_0BB1D8(&D_00332480, r.x, r.y, r.w, r.h);
    func_0BB1C0(&D_00332480, 0x1ED, 0xFFFFFFFF);
    func_0BACE0(&D_00332480, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_026FD0(i)) {
            if (func_0C3670(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0BADC0(&D_00332480, 1, 1);
            func_0BB588(&D_00332480, func_12FCE0(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00332480.flags |= 0x14;
    func_0BAF58(&D_00332480);
}
