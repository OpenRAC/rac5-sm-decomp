/* LEVEL_18:0x0B19C0 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00277340;
extern char D_001AE500[];

extern void func_0A7B60(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_09BE08(int id, struct Rect0C3530 *r, float f);
extern void func_0A7EB8(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0A7EA0(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0A79C0(char *object, int first, int second);
extern int func_024780(unsigned int i);
extern int func_0B07B0(unsigned int i);
extern int func_0A7AA0(struct Panel0C3530 *p, int a, int b);
extern int func_10D9B0(unsigned int i, int z);
extern int func_0A8268(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0A7C38(struct Panel0C3530 *p);

void func_0B19C0(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0A7B60(&D_00277340, D_001AE500, 0x1000, 0);
    func_09BE08(0x1EC, &r, 0.0f);
    func_0A7EB8(&D_00277340, r.x, r.y, r.w, r.h);
    func_0A7EA0(&D_00277340, 0x1ED, 0xFFFFFFFF);
    func_0A79C0(&D_00277340, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_024780(i)) {
            if (func_0B07B0(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0A7AA0(&D_00277340, 1, 1);
            func_0A8268(&D_00277340, func_10D9B0(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00277340.flags |= 0x14;
    func_0A7C38(&D_00277340);
}
