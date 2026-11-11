/* LEVEL_22:0x0B19E0 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_0027EC40;
extern char D_0015E388[];

extern void func_0A7FE0(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_09CD18(int id, struct Rect0C3530 *r, float f);
extern void func_0A8338(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0A8320(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0A7E40(char *object, int first, int second);
extern int func_022080(unsigned int i);
extern int func_0B07D0(unsigned int i);
extern int func_0A7F20(struct Panel0C3530 *p, int a, int b);
extern int func_109350(unsigned int i, int z);
extern int func_0A86E8(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0A80B8(struct Panel0C3530 *p);

void func_0B19E0(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0A7FE0(&D_0027EC40, D_0015E388, 0x1000, 0);
    func_09CD18(0x1EC, &r, 0.0f);
    func_0A8338(&D_0027EC40, r.x, r.y, r.w, r.h);
    func_0A8320(&D_0027EC40, 0x1ED, 0xFFFFFFFF);
    func_0A7E40(&D_0027EC40, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_022080(i)) {
            if (func_0B07D0(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0A7F20(&D_0027EC40, 1, 1);
            func_0A86E8(&D_0027EC40, func_109350(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_0027EC40.flags |= 0x14;
    func_0A80B8(&D_0027EC40);
}
