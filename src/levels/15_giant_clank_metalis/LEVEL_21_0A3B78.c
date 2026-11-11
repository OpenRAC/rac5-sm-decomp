/* LEVEL_21:0x0A3B78 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_002408C0;
extern char D_00153C88[];

extern void func_09A180(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_08EFD0(int id, struct Rect0C3530 *r, float f);
extern void func_09A4D8(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_09A4C0(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_099FE0(char *object, int first, int second);
extern int func_0216E0(unsigned int i);
extern int func_0A2968(unsigned int i);
extern int func_09A0C0(struct Panel0C3530 *p, int a, int b);
extern int func_0F0D48(unsigned int i, int z);
extern int func_09A888(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_09A258(struct Panel0C3530 *p);

void func_0A3B78(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_09A180(&D_002408C0, D_00153C88, 0x1000, 0);
    func_08EFD0(0x1EC, &r, 0.0f);
    func_09A4D8(&D_002408C0, r.x, r.y, r.w, r.h);
    func_09A4C0(&D_002408C0, 0x1ED, 0xFFFFFFFF);
    func_099FE0(&D_002408C0, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_0216E0(i)) {
            if (func_0A2968(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_09A0C0(&D_002408C0, 1, 1);
            func_09A888(&D_002408C0, func_0F0D48(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_002408C0.flags |= 0x14;
    func_09A258(&D_002408C0);
}
