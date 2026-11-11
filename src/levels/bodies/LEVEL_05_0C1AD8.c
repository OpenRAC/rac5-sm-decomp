/* LEVEL_05:0x0C1AD8 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00314F40;
extern char D_001EE388[];

extern void func_0B80E0(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0ACCC8(int id, struct Rect0C3530 *r, float f);
extern void func_0B8438(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0B8420(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0B7F40(char *object, int first, int second);
extern int func_026430(unsigned int i);
extern int func_0C08C8(unsigned int i);
extern int func_0B8020(struct Panel0C3530 *p, int a, int b);
extern int func_12D7F8(unsigned int i, int z);
extern int func_0B87E8(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0B81B8(struct Panel0C3530 *p);

void func_0C1AD8(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0B80E0(&D_00314F40, D_001EE388, 0x1000, 0);
    func_0ACCC8(0x1EC, &r, 0.0f);
    func_0B8438(&D_00314F40, r.x, r.y, r.w, r.h);
    func_0B8420(&D_00314F40, 0x1ED, 0xFFFFFFFF);
    func_0B7F40(&D_00314F40, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_026430(i)) {
            if (func_0C08C8(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0B8020(&D_00314F40, 1, 1);
            func_0B87E8(&D_00314F40, func_12D7F8(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00314F40.flags |= 0x14;
    func_0B81B8(&D_00314F40);
}
