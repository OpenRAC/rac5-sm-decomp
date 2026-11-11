/* LEVEL_02:0x018180 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_00208C2C;
extern char D_0024C650[];
extern char D_0039F220[];
extern char D_00369220[];
extern char D_00220D38[];
extern char D_00210F48[];
extern char D_0039F268[];
extern char D_00397220[];
extern char D_00220D58[];
extern void func_0B7128(void);
extern void func_0B6580(char *p);
extern void func_1393C0(int a);
extern int func_1385C0(char *a, char *b, char *c, int d);
extern int func_138B58(char *a, int b, int c);
extern void func_138A98(char *a, char *b);
extern void func_017CA8(void);
extern int func_027BF0(int a, int b);
extern void func_01B940(int a);
extern void func_03C3E0(void);
extern int *func_024F88(int a, int b);
extern void func_09CF20(void);
extern void func_09EBC8(void);
extern void func_0A5F98(void);
extern void func_03A320(void);

void func_018180(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0B7128();
    s = D_0024C650;
    func_0B6580(s + 0x30);
    func_1393C0(1);
    if (D_00208C2C != 0) {
        mode = D_00208C2C->mode;
    }
    r = D_0039F220;
    func_1385C0(r, D_00369220, D_00220D38, 0x2E000);
    if (func_138B58(r, (unsigned char)mode, 1)) {
        func_138A98(r, D_00210F48);
    }
    r = D_0039F268;
    func_1385C0(r, D_00397220, D_00220D58, 0x8000);
    if (func_138B58(r, (unsigned char)mode, 0)) {
        func_138A98(r, buf);
    }
    func_017CA8();
    v = func_027BF0(0x90, 0xFF);
    if (v) {
        func_01B940(v);
    }
    func_03C3E0();
    if (s != 0) {
        o = func_024F88(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_09CF20();
    func_09EBC8();
    func_0A5F98();
    func_03A320();
}
