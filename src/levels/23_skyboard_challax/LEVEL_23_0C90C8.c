/* LEVEL_23:0x0C90C8 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_002FE038;
extern int D_001D7AFC;
extern int D_001D79DC;
extern unsigned char D_001D79E9;
extern int D_001D79F0;
extern char *D_001D7AF8;
extern char D_001E7688[];

extern void func_027C18(void);
extern int func_0ACDE8(int a);
extern void func_0AC1C8(void *a);
extern void func_0CDB60(int a);
extern void func_0C9698(void);
extern int func_0A5478(int id, struct Loc0D2298 *out, float f);
extern int func_09F3F0(struct Loc0D2298 *l);
extern int func_09F420(struct Loc0D2298 *l);
extern int func_09F450(struct Loc0D2298 *l);
extern int func_09F508(struct Loc0D2298 *l);
extern void func_0A2150(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0A53C8(unsigned int id, int a);
extern char *func_09D150(int);
extern void func_125550(int a, char *s, char *v);
extern int func_125760(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0C9238(void);

void func_0C90C8(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_027C18();
    func_0ACDE8(6);
    D_001D7AFC = 0;
    func_0AC1C8((void *)1);
    func_0CDB60(1);
    D_001D79E9 = 0;
    D_001D79DC = 1;
    D_001D79F0 = 0;
    func_0C9698();
    func_0A5478(0x224, &l, 0.0f);
    win = &D_002FE038;
    x = func_09F3F0(&l);
    y = func_09F420(&l);
    w = func_09F450(&l);
    h = func_09F508(&l);
    func_0A2150(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0A53C8(0x556, 0);
    func_0A53C8(0x557, 0);
    func_0A53C8(0x558, 0);
    func_0A53C8(0x553, 0);
    n0 = func_09D150(0);
    func_125550(0, D_001E7688, n0);
    func_125760(0, 0x14, 0x14, 0x14);
    D_001D7AF8 = func_09D150(1);
    func_0C9238();
}
