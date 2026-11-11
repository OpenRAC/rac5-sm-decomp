/* LEVEL_16:0x0B29E8 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00276FC0;
extern char D_001AD080[];

extern void func_0A8B88(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_09CDF8(int id, struct Rect0C3530 *r, float f);
extern void func_0A8EE0(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0A8EC8(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0A89E8(char *object, int first, int second);
extern int func_0251D0(unsigned int i);
extern int func_0B17D8(unsigned int i);
extern int func_0A8AC8(struct Panel0C3530 *p, int a, int b);
extern int func_10ED00(unsigned int i, int z);
extern int func_0A9290(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0A8C60(struct Panel0C3530 *p);

void func_0B29E8(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0A8B88(&D_00276FC0, D_001AD080, 0x1000, 0);
    func_09CDF8(0x1EC, &r, 0.0f);
    func_0A8EE0(&D_00276FC0, r.x, r.y, r.w, r.h);
    func_0A8EC8(&D_00276FC0, 0x1ED, 0xFFFFFFFF);
    func_0A89E8(&D_00276FC0, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_0251D0(i)) {
            if (func_0B17D8(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0A8AC8(&D_00276FC0, 1, 1);
            func_0A9290(&D_00276FC0, func_10ED00(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00276FC0.flags |= 0x14;
    func_0A8C60(&D_00276FC0);
}
