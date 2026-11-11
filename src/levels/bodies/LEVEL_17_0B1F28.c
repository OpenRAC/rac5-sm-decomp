/* LEVEL_17:0x0B1F28 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_002682C0;
extern char D_001A0680[];

extern void func_0A80C8(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_09C2F0(int id, struct Rect0C3530 *r, float f);
extern void func_0A8420(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0A8408(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0A7F28(char *object, int first, int second);
extern int func_024B50(unsigned int i);
extern int func_0B0D18(unsigned int i);
extern int func_0A8008(struct Panel0C3530 *p, int a, int b);
extern int func_10E278(unsigned int i, int z);
extern int func_0A87D0(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0A81A0(struct Panel0C3530 *p);

void func_0B1F28(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0A80C8(&D_002682C0, D_001A0680, 0x1000, 0);
    func_09C2F0(0x1EC, &r, 0.0f);
    func_0A8420(&D_002682C0, r.x, r.y, r.w, r.h);
    func_0A8408(&D_002682C0, 0x1ED, 0xFFFFFFFF);
    func_0A7F28(&D_002682C0, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_024B50(i)) {
            if (func_0B0D18(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0A8008(&D_002682C0, 1, 1);
            func_0A87D0(&D_002682C0, func_10E278(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_002682C0.flags |= 0x14;
    func_0A81A0(&D_002682C0);
}
