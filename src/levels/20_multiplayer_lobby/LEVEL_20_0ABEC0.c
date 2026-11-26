/* LEVEL_20:0x0ABEC0 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0019E4B8;
extern int D_00114C8C;
extern int D_00114B6C;
extern unsigned char D_00114B79;
extern int D_00114B80;
extern char *D_00114C88;
extern char D_0012A448[];

extern void func_024608(void);
extern int func_08F6B0(int a);
extern void func_08E978(void *a);
extern void func_0B0958(int a);
extern void func_0AC490(void);
extern int func_0874F0(int id, struct Loc0D2298 *out, float f);
extern int func_081408(struct Loc0D2298 *l);
extern int func_081438(struct Loc0D2298 *l);
extern int func_081468(struct Loc0D2298 *l);
extern int func_081520(struct Loc0D2298 *l);
extern void func_0841C8(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_087440(unsigned int id, int a);
extern int func_07FDB8(void);
extern void func_0E3930(int a, char *s, char *v);
extern int func_0E3B40(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0AC030(void);

void func_0ABEC0(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_024608();
    func_08F6B0(6);
    D_00114C8C = 0;
    func_08E978((void *)1);
    func_0B0958(1);
    D_00114B79 = 0;
    D_00114B6C = 1;
    D_00114B80 = 0;
    func_0AC490();
    func_0874F0(0x224, &l, 0.0f);
    win = &D_0019E4B8;
    x = func_081408(&l);
    y = func_081438(&l);
    w = func_081468(&l);
    h = func_081520(&l);
    func_0841C8(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_087440(0x556, 0);
    func_087440(0x557, 0);
    func_087440(0x558, 0);
    func_087440(0x553, 0);
    n0 = ((char *(*)(int))func_07FDB8)(0);
    func_0E3930(0, D_0012A448, n0);
    func_0E3B40(0, 0x14, 0x14, 0x14);
    D_00114C88 = ((char *(*)(int))func_07FDB8)(1);
    func_0AC030();
}
