/* LEVEL_08:0x0DD240 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0037BE78;
extern int D_0024D5BC;
extern int D_0024D49C;
extern unsigned char D_0024D4A9;
extern int D_0024D4B0;
extern char *D_0024D5B8;
extern char D_0025E188[];

extern void func_02A620(void);
extern int func_0C0F10(int a);
extern void func_0C01D8(void *a);
extern void func_0E1CF0(int a);
extern void func_0DD810(void);
extern int func_0B9040(int id, struct Loc0D2298 *out, float f);
extern int func_0B2F78(struct Loc0D2298 *l);
extern int func_0B2FA8(struct Loc0D2298 *l);
extern int func_0B2FD8(struct Loc0D2298 *l);
extern int func_0B3090(struct Loc0D2298 *l);
extern void func_0B5D18(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0B8F90(unsigned int id, int a);
extern char *func_0B0CD8(int);
extern void func_145310(int a, char *s, char *v);
extern int func_145520(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0DD3B0(void);

void func_0DD240(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_02A620();
    func_0C0F10(6);
    D_0024D5BC = 0;
    func_0C01D8((void *)1);
    func_0E1CF0(1);
    D_0024D4A9 = 0;
    D_0024D49C = 1;
    D_0024D4B0 = 0;
    func_0DD810();
    func_0B9040(0x224, &l, 0.0f);
    win = &D_0037BE78;
    x = func_0B2F78(&l);
    y = func_0B2FA8(&l);
    w = func_0B2FD8(&l);
    h = func_0B3090(&l);
    func_0B5D18(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0B8F90(0x556, 0);
    func_0B8F90(0x557, 0);
    func_0B8F90(0x558, 0);
    func_0B8F90(0x553, 0);
    n0 = func_0B0CD8(0);
    func_145310(0, D_0025E188, n0);
    func_145520(0, 0x14, 0x14, 0x14);
    D_0024D5B8 = func_0B0CD8(1);
    func_0DD3B0();
}
