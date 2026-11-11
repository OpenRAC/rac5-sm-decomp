/* LEVEL_03:0x0175A0 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_0020C62C;
extern char D_0024FFC0[];
extern char D_003A2BA0[];
extern char D_0036CBA0[];
extern char D_00224CB8[];
extern char D_00214608[];
extern char D_003A2BE8[];
extern char D_0039ABA0[];
extern char D_00224CD8[];
extern void func_0B0598(void);
extern void func_0AF9F0(char *p);
extern void func_1313D8(int a);
extern int func_1305D8(char *a, char *b, char *c, int d);
extern int func_130B70(char *a, int b, int c);
extern void func_130AB0(char *a, char *b);
extern void func_0170C8(void);
extern int func_0272E8(int a, int b);
extern void func_01AD48(int a);
extern void func_035BD8(void);
extern int *func_0244F8(int a, int b);
extern void func_096480(void);
extern void func_098280(void);
extern void func_09F430(void);
extern void func_033B18(void);

void func_0175A0(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0B0598();
    s = D_0024FFC0;
    func_0AF9F0(s + 0x30);
    func_1313D8(1);
    if (D_0020C62C != 0) {
        mode = D_0020C62C->mode;
    }
    r = D_003A2BA0;
    func_1305D8(r, D_0036CBA0, D_00224CB8, 0x2E000);
    if (func_130B70(r, (unsigned char)mode, 1)) {
        func_130AB0(r, D_00214608);
    }
    r = D_003A2BE8;
    func_1305D8(r, D_0039ABA0, D_00224CD8, 0x8000);
    if (func_130B70(r, (unsigned char)mode, 0)) {
        func_130AB0(r, buf);
    }
    func_0170C8();
    v = func_0272E8(0x90, 0xFF);
    if (v) {
        func_01AD48(v);
    }
    func_035BD8();
    if (s != 0) {
        o = func_0244F8(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_096480();
    func_098280();
    func_09F430();
    func_033B18();
}
