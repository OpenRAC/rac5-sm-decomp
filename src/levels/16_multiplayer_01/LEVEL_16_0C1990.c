/* LEVEL_16:0x0C1990 -- placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0027AC78;
extern int D_001B25AC;
extern int D_001B248C;
extern unsigned char D_001B2499;
extern int D_001B24A0;
extern char *D_001B25A8;
extern char D_001C93C8[];

extern void func_027B00(void);
extern int func_0A50B0(int a);
extern void func_0A4300(void *a);
extern void func_0C6428(int a);
extern void func_0C1F60(void);
extern int func_09CDF8(int id, struct Loc0D2298 *out, float f);
extern int func_096D10(struct Loc0D2298 *l);
extern int func_096D40(struct Loc0D2298 *l);
extern int func_096D70(struct Loc0D2298 *l);
extern int func_096E28(struct Loc0D2298 *l);
extern void func_099AD0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_09CD48(unsigned int id, int a);
extern int func_0956C0(void);
extern void func_110B48(int a, char *s, char *v);
extern int func_110D58(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0C1B00(void);

void func_0C1990(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_027B00();
    func_0A50B0(6);
    D_001B25AC = 0;
    func_0A4300((void *)1);
    func_0C6428(1);
    D_001B2499 = 0;
    D_001B248C = 1;
    D_001B24A0 = 0;
    func_0C1F60();
    func_09CDF8(0x224, &l, 0.0f);
    win = &D_0027AC78;
    x = func_096D10(&l);
    y = func_096D40(&l);
    w = func_096D70(&l);
    h = func_096E28(&l);
    func_099AD0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_09CD48(0x556, 0);
    func_09CD48(0x557, 0);
    func_09CD48(0x558, 0);
    func_09CD48(0x553, 0);
    n0 = ((char *(*)(int))func_0956C0)(0);
    func_110B48(0, D_001C93C8, n0);
    func_110D58(0, 0x14, 0x14, 0x14);
    D_001B25A8 = ((char *(*)(int))func_0956C0)(1);
    func_0C1B00();
}
