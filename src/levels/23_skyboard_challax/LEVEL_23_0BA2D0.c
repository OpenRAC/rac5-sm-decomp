/* LEVEL_23:0x0BA2D0 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_002FA4C0;
extern char D_001D2408[];

extern void func_0B08D0(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0A5478(int id, struct Rect0C3530 *r, float f);
extern void func_0B0C28(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0B0C10(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0B0730(char *object, int first, int second);
extern int func_025448(unsigned int i);
extern int func_0B90C0(unsigned int i);
extern int func_0B0810(struct Panel0C3530 *p, int a, int b);
extern int func_1235F8(unsigned int i, int z);
extern int func_0B0FD8(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0B09A8(struct Panel0C3530 *p);

void func_0BA2D0(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0B08D0(&D_002FA4C0, D_001D2408, 0x1000, 0);
    func_0A5478(0x1EC, &r, 0.0f);
    func_0B0C28(&D_002FA4C0, r.x, r.y, r.w, r.h);
    func_0B0C10(&D_002FA4C0, 0x1ED, 0xFFFFFFFF);
    func_0B0730(&D_002FA4C0, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_025448(i)) {
            if (func_0B90C0(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0B0810(&D_002FA4C0, 1, 1);
            func_0B0FD8(&D_002FA4C0, func_1235F8(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_002FA4C0.flags |= 0x14;
    func_0B09A8(&D_002FA4C0);
}
