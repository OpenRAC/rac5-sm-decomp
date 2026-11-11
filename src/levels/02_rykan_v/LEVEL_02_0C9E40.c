/* LEVEL_02:0x0C9E40 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00340580;
extern char D_00213FC8[];

extern void func_0C0448(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0B5018(int id, struct Rect0C3530 *r, float f);
extern void func_0C07A0(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0C0788(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0C02A8(char *object, int first, int second);
extern int func_027ED8(unsigned int i);
extern int func_0C8C30(unsigned int i);
extern int func_0C0388(struct Panel0C3530 *p, int a, int b);
extern int func_138230(unsigned int i, int z);
extern int func_0C0B50(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0C0520(struct Panel0C3530 *p);

void func_0C9E40(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0C0448(&D_00340580, D_00213FC8, 0x1000, 0);
    func_0B5018(0x1EC, &r, 0.0f);
    func_0C07A0(&D_00340580, r.x, r.y, r.w, r.h);
    func_0C0788(&D_00340580, 0x1ED, 0xFFFFFFFF);
    func_0C02A8(&D_00340580, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_027ED8(i)) {
            if (func_0C8C30(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0C0388(&D_00340580, 1, 1);
            func_0C0B50(&D_00340580, func_138230(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00340580.flags |= 0x14;
    func_0C0520(&D_00340580);
}
