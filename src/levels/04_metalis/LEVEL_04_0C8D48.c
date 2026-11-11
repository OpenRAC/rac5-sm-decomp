/* LEVEL_04:0x0C8D48 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00343880;
extern char D_002184C8[];

extern void func_0BF318(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0B3958(int id, struct Rect0C3530 *r, float f);
extern void func_0BF670(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0BF658(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0BF178(char *object, int first, int second);
extern int func_027380(unsigned int i);
extern int func_0C7B38(unsigned int i);
extern int func_0BF258(struct Panel0C3530 *p, int a, int b);
extern int func_13E300(unsigned int i, int z);
extern int func_0BFA20(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0BF3F0(struct Panel0C3530 *p);

void func_0C8D48(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0BF318(&D_00343880, D_002184C8, 0x1000, 0);
    func_0B3958(0x1EC, &r, 0.0f);
    func_0BF670(&D_00343880, r.x, r.y, r.w, r.h);
    func_0BF658(&D_00343880, 0x1ED, 0xFFFFFFFF);
    func_0BF178(&D_00343880, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_027380(i)) {
            if (func_0C7B38(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0BF258(&D_00343880, 1, 1);
            func_0BFA20(&D_00343880, func_13E300(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00343880.flags |= 0x14;
    func_0BF3F0(&D_00343880);
}
