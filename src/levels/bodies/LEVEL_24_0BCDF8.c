/* LEVEL_24:0x0BCDF8 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_002F4F40;
extern char D_001CFC88[];

extern void func_0B33C8(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0A7F80(int id, struct Rect0C3530 *r, float f);
extern void func_0B3720(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0B3708(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0B3228(char *object, int first, int second);
extern int func_025020(unsigned int i);
extern int func_0BBBE8(unsigned int i);
extern int func_0B3308(struct Panel0C3530 *p, int a, int b);
extern int func_127980(unsigned int i, int z);
extern int func_0B3AD0(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0B34A0(struct Panel0C3530 *p);

void func_0BCDF8(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0B33C8(&D_002F4F40, D_001CFC88, 0x1000, 0);
    func_0A7F80(0x1EC, &r, 0.0f);
    func_0B3720(&D_002F4F40, r.x, r.y, r.w, r.h);
    func_0B3708(&D_002F4F40, 0x1ED, 0xFFFFFFFF);
    func_0B3228(&D_002F4F40, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_025020(i)) {
            if (func_0BBBE8(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0B3308(&D_002F4F40, 1, 1);
            func_0B3AD0(&D_002F4F40, func_127980(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_002F4F40.flags |= 0x14;
    func_0B34A0(&D_002F4F40);
}
