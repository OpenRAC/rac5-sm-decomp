/* LEVEL_06:0x0BDE30 -- placement copy of LEVEL_01_0C3530.c: builds the global panel: sets its bounds and colours, adds an entry for every available slot and marks it dirty. */

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

extern struct Panel0C3530 D_00315E00;
extern char D_001EDF08[];

extern void func_0B4438(struct Panel0C3530 *p, void *src, int n, int z);
extern void func_0A8ED8(int id, struct Rect0C3530 *r, float f);
extern void func_0B4790(struct Panel0C3530 *p, int x, int y, int w, int h);
extern void func_0B4778(struct Panel0C3530 *p, int id, unsigned int color);
extern int func_0B4298(char *object, int first, int second);
extern int func_025BA0(unsigned int i);
extern int func_0BCC20(unsigned int i);
extern int func_0B4378(struct Panel0C3530 *p, int a, int b);
extern int func_128550(unsigned int i, int z);
extern int func_0B4B40(struct Panel0C3530 *p, int r, unsigned int i, int a, int b, int c, int d, int e, unsigned int color);
extern int func_0B4510(struct Panel0C3530 *p);

void func_0BDE30(void)
{
    struct Rect0C3530 r;
    unsigned int i;
    int ok;

    func_0B4438(&D_00315E00, D_001EDF08, 0x1000, 0);
    func_0A8ED8(0x1EC, &r, 0.0f);
    func_0B4790(&D_00315E00, r.x, r.y, r.w, r.h);
    func_0B4778(&D_00315E00, 0x1ED, 0xFFFFFFFF);
    func_0B4298(&D_00315E00, 0x40602020, 0xFFB07050);
    for (i = 1; i < 12; i++) {
        ok = 0;
        if (func_025BA0(i)) {
            if (func_0BCC20(i)) {
                ok = 1;
            }
        }
        if (ok) {
            func_0B4378(&D_00315E00, 1, 1);
            func_0B4B40(&D_00315E00, func_128550(i, 0), i, 0, 0, 0, 1, 0, 0xFFFFFFFF);
        }
    }
    D_00315E00.flags |= 0x14;
    func_0B4510(&D_00315E00);
}
