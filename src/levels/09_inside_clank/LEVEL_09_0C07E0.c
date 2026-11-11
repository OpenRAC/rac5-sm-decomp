/* LEVEL_09:0x0C07E0 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00310800;
extern char D_001E8E08[];

extern void func_0B6DE8(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0AB9B8(int id, struct Rect0C3530 *r, float f);
extern void func_0B7140(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0B7128(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0B6C48(char *object, int first, int second);
extern int func_0266F8(unsigned int i);
extern int func_0BF5D0(unsigned int i);
extern int func_0B6D28(struct Panel0C3530 *p, int a, int b);
extern int func_12AE18(unsigned int i, int z);
extern int func_0B74F0(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0B6EC0(struct Panel0C3530 *p);

void func_0C07E0(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0B6DE8(&D_00310800, D_001E8E08, 0x1000, 0);
    func_0AB9B8(0x1EC, &r, 0.0f);
    func_0B7140(&D_00310800, r.x, r.y, r.w, r.h);
    func_0B7128(&D_00310800, 0x1ED, 0xFFFFFFFF);
    func_0B6C48(&D_00310800, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_0266F8(i)) {
            if (func_0BF5D0(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0B6D28(&D_00310800, 1, 1);
            func_0B74F0(&D_00310800, func_12AE18(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00310800.flags |= 0x14;
    func_0B6EC0(&D_00310800);
}
