/* LEVEL_22:0x0144E0 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_0015332C;
extern char D_00186D40[];
extern char D_002DD800[];
extern char D_002A7800[];
extern char D_00169238[];
extern char D_0015B308[];
extern char D_002DD848[];
extern char D_002D5800[];
extern char D_00169258[];
extern void func_09EE28(void);
extern void func_09E280(char *p);
extern void func_10A4E0(int a);
extern int func_1096E0(char *a, char *b, char *c, int d);
extern int func_109C78(char *a, int b, int c);
extern void func_109BB8(char *a, char *b);
extern void func_014008(void);
extern int func_021D98(int a, int b);
extern void func_0175F8(int a);
extern void func_02D8E8(void);
extern int *func_01F460(int a, int b);
extern void func_087620(void);
extern void func_0891B8(void);
extern void func_08DD58(void);
extern void func_02BAD0(void);

void func_0144E0(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_09EE28();
    s = D_00186D40;
    func_09E280(s + 0x30);
    func_10A4E0(1);
    if (D_0015332C != 0) {
        mode = D_0015332C->mode;
    }
    r = D_002DD800;
    func_1096E0(r, D_002A7800, D_00169238, 0x2E000);
    if (func_109C78(r, (unsigned char)mode, 1)) {
        func_109BB8(r, D_0015B308);
    }
    r = D_002DD848;
    func_1096E0(r, D_002D5800, D_00169258, 0x8000);
    if (func_109C78(r, (unsigned char)mode, 0)) {
        func_109BB8(r, buf);
    }
    func_014008();
    v = func_021D98(0x90, 0xFF);
    if (v) {
        func_0175F8(v);
    }
    func_02D8E8();
    if (s != 0) {
        o = func_01F460(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_087620();
    func_0891B8();
    func_08DD58();
    func_02BAD0();
}
