/* LEVEL_17:0x0C0ED0 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0026BF78;
extern int D_001A5BAC;
extern int D_001A5A8C;
extern unsigned char D_001A5A99;
extern int D_001A5AA0;
extern char *D_001A5BA8;
extern char D_001BC848[];

extern void func_027480(void);
extern int func_0A4590(int a);
extern void func_0A37E0(void *a);
extern void func_0C5968(int a);
extern void func_0C14A0(void);
extern int func_09C2F0(int id, struct Loc0D2298 *out, float f);
extern int func_096208(struct Loc0D2298 *l);
extern int func_096238(struct Loc0D2298 *l);
extern int func_096268(struct Loc0D2298 *l);
extern int func_096320(struct Loc0D2298 *l);
extern void func_098FC8(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_09C240(unsigned int id, int a);
extern int func_094BB8(void);
extern void func_1100C0(int a, char *s, char *v);
extern int func_1102D0(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0C1040(void);

void func_0C0ED0(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_027480();
    func_0A4590(6);
    D_001A5BAC = 0;
    func_0A37E0((void *)1);
    func_0C5968(1);
    D_001A5A99 = 0;
    D_001A5A8C = 1;
    D_001A5AA0 = 0;
    func_0C14A0();
    func_09C2F0(0x224, &l, 0.0f);
    win = &D_0026BF78;
    x = func_096208(&l);
    y = func_096238(&l);
    w = func_096268(&l);
    h = func_096320(&l);
    func_098FC8(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_09C240(0x556, 0);
    func_09C240(0x557, 0);
    func_09C240(0x558, 0);
    func_09C240(0x553, 0);
    n0 = ((char *(*)(int))func_094BB8)(0);
    func_1100C0(0, D_001BC848, n0);
    func_1102D0(0, 0x14, 0x14, 0x14);
    D_001A5BA8 = ((char *(*)(int))func_094BB8)(1);
    func_0C1040();
}
