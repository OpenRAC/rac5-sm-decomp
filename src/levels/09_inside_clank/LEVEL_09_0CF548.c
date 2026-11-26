/* LEVEL_09:0x0CF548 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_00314378;
extern int D_001EE4FC;
extern int D_001EE3DC;
extern unsigned char D_001EE3E9;
extern int D_001EE3F0;
extern char *D_001EE4F8;
extern char D_001FE108[];

extern void func_028F10(void);
extern int func_0B32D0(int a);
extern void func_0B26B0(void *a);
extern void func_0D3FE0(int a);
extern void func_0CFB18(void);
extern int func_0AB9B8(int id, struct Loc0D2298 *out, float f);
extern int func_0A5930(struct Loc0D2298 *l);
extern int func_0A5960(struct Loc0D2298 *l);
extern int func_0A5990(struct Loc0D2298 *l);
extern int func_0A5A48(struct Loc0D2298 *l);
extern void func_0A8690(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0AB908(unsigned int id, int a);
extern char *func_0A3690(int);
extern void func_12CD70(int a, char *s, char *v);
extern int func_12CF80(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0CF6B8(void);

void func_0CF548(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_028F10();
    func_0B32D0(6);
    D_001EE4FC = 0;
    func_0B26B0((void *)1);
    func_0D3FE0(1);
    D_001EE3E9 = 0;
    D_001EE3DC = 1;
    D_001EE3F0 = 0;
    func_0CFB18();
    func_0AB9B8(0x224, &l, 0.0f);
    win = &D_00314378;
    x = func_0A5930(&l);
    y = func_0A5960(&l);
    w = func_0A5990(&l);
    h = func_0A5A48(&l);
    func_0A8690(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0AB908(0x556, 0);
    func_0AB908(0x557, 0);
    func_0AB908(0x558, 0);
    func_0AB908(0x553, 0);
    n0 = func_0A3690(0);
    func_12CD70(0, D_001FE108, n0);
    func_12CF80(0, 0x14, 0x14, 0x14);
    D_001EE4F8 = func_0A3690(1);
    func_0CF6B8();
}
