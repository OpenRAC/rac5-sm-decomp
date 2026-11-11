/* LEVEL_19:0x0B22C0 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00277140;
extern char D_001AE200[];

extern void func_0A8460(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_09C688(int id, struct Rect0C3530 *r, float f);
extern void func_0A87B8(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0A87A0(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0A82C0(char *object, int first, int second);
extern int func_024D78(unsigned int i);
extern int func_0B10B0(unsigned int i);
extern int func_0A83A0(struct Panel0C3530 *p, int a, int b);
extern int func_10F3A0(unsigned int i, int z);
extern int func_0A8B68(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0A8538(struct Panel0C3530 *p);

void func_0B22C0(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0A8460(&D_00277140, D_001AE200, 0x1000, 0);
    func_09C688(0x1EC, &r, 0.0f);
    func_0A87B8(&D_00277140, r.x, r.y, r.w, r.h);
    func_0A87A0(&D_00277140, 0x1ED, 0xFFFFFFFF);
    func_0A82C0(&D_00277140, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_024D78(i)) {
            if (func_0B10B0(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0A83A0(&D_00277140, 1, 1);
            func_0A8B68(&D_00277140, func_10F3A0(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00277140.flags |= 0x14;
    func_0A8538(&D_00277140);
}
