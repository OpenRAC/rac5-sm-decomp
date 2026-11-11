/* LEVEL_03:0x0C3318 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00343F00;
extern char D_00217688[];

extern void func_0B9920(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0AE488(int id, struct Rect0C3530 *r, float f);
extern void func_0B9C78(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0B9C60(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0B9780(char *object, int first, int second);
extern int func_0275D0(unsigned int i);
extern int func_0C2108(unsigned int i);
extern int func_0B9860(struct Panel0C3530 *p, int a, int b);
extern int func_130248(unsigned int i, int z);
extern int func_0BA028(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0B99F8(struct Panel0C3530 *p);

void func_0C3318(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0B9920(&D_00343F00, D_00217688, 0x1000, 0);
    func_0AE488(0x1EC, &r, 0.0f);
    func_0B9C78(&D_00343F00, r.x, r.y, r.w, r.h);
    func_0B9C60(&D_00343F00, 0x1ED, 0xFFFFFFFF);
    func_0B9780(&D_00343F00, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_0275D0(i)) {
            if (func_0C2108(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0B9860(&D_00343F00, 1, 1);
            func_0BA028(&D_00343F00, func_130248(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00343F00.flags |= 0x14;
    func_0B99F8(&D_00343F00);
}
