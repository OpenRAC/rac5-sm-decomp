/* LEVEL_01:0x0C3530 -- builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00329080;
extern char D_001FF008[];

extern void func_0B9B38(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0AE708(int id, struct Rect0C3530 *r, float f);
extern void func_0B9E90(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0B9E78(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0B9998(char *object, int first, int second);
extern int func_0276F0(unsigned int i);
extern int func_0C2320(unsigned int i);
extern int func_0B9A78(struct Panel0C3530 *p, int a, int b);
extern int func_131E80(unsigned int i, int z);
extern int func_0BA240(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0B9C10(struct Panel0C3530 *p);

void func_0C3530(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0B9B38(&D_00329080, D_001FF008, 0x1000, 0);
    func_0AE708(0x1EC, &r, 0.0f);
    func_0B9E90(&D_00329080, r.x, r.y, r.w, r.h);
    func_0B9E78(&D_00329080, 0x1ED, 0xFFFFFFFF);
    func_0B9998(&D_00329080, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_0276F0(i)) {
            if (func_0C2320(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0B9A78(&D_00329080, 1, 1);
            func_0BA240(&D_00329080, func_131E80(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00329080.flags |= 0x14;
    func_0B9C10(&D_00329080);
}
