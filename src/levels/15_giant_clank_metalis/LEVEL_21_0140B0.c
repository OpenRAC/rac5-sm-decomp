/* LEVEL_21:0x0140B0 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_00148C2C;
extern char D_0017D2C0[];
extern char D_0029F0A0[];
extern char D_002690A0[];
extern char D_00160538[];
extern char D_00150C08[];
extern char D_0029F0E8[];
extern char D_002970A0[];
extern char D_00160558[];
extern void func_0910E0(void);
extern void func_090538(char *p);
extern void func_0F1ED8(int a);
extern int func_0F10D8(char *a, char *b, char *c, int d);
extern int func_0F1670(char *a, int b, int c);
extern void func_0F15B0(char *a, char *b);
extern void func_013BD8(void);
extern int func_0213F8(int a, int b);
extern void func_0171C8(int a);
extern void func_02D0D0(void);
extern int *func_01E990(int a, int b);
extern void func_07A710(void);
extern void func_07C490(void);
extern void func_080018(void);
extern void func_02B2B8(void);

void func_0140B0(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0910E0();
    s = D_0017D2C0;
    func_090538(s + 0x30);
    func_0F1ED8(1);
    if (D_00148C2C != 0) {
        mode = D_00148C2C->mode;
    }
    r = D_0029F0A0;
    func_0F10D8(r, D_002690A0, D_00160538, 0x2E000);
    if (func_0F1670(r, (unsigned char)mode, 1)) {
        func_0F15B0(r, D_00150C08);
    }
    r = D_0029F0E8;
    func_0F10D8(r, D_002970A0, D_00160558, 0x8000);
    if (func_0F1670(r, (unsigned char)mode, 0)) {
        func_0F15B0(r, buf);
    }
    func_013BD8();
    v = func_0213F8(0x90, 0xFF);
    if (v) {
        func_0171C8(v);
    }
    func_02D0D0();
    if (s != 0) {
        o = func_01E990(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_07A710();
    func_07C490();
    func_080018();
    func_02B2B8();
}
