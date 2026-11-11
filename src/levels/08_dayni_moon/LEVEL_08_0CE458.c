/* LEVEL_08:0x0CE458 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00378300;
extern char D_00247EC8[];

extern void func_0C4A28(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0B9040(int id, struct Rect0C3530 *r, float f);
extern void func_0C4D80(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0C4D68(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0C4888(char *object, int first, int second);
extern int func_027D18(unsigned int i);
extern int func_0CD248(unsigned int i);
extern int func_0C4968(struct Panel0C3530 *p, int a, int b);
extern int func_1433B8(unsigned int i, int z);
extern int func_0C5130(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0C4B00(struct Panel0C3530 *p);

void func_0CE458(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0C4A28(&D_00378300, D_00247EC8, 0x1000, 0);
    func_0B9040(0x1EC, &r, 0.0f);
    func_0C4D80(&D_00378300, r.x, r.y, r.w, r.h);
    func_0C4D68(&D_00378300, 0x1ED, 0xFFFFFFFF);
    func_0C4888(&D_00378300, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_027D18(i)) {
            if (func_0CD248(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0C4968(&D_00378300, 1, 1);
            func_0C5130(&D_00378300, func_1433B8(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00378300.flags |= 0x14;
    func_0C4B00(&D_00378300);
}
