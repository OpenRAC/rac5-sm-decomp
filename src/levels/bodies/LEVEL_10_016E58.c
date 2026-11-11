/* LEVEL_10:0x016E58 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_001FCFAC;
extern char D_0023E540[];
extern char D_00391120[];
extern char D_0035B120[];
extern char D_00214D38[];
extern char D_00204F88[];
extern char D_00391168[];
extern char D_00389120[];
extern char D_00214D58[];
extern void func_0B1930(void);
extern void func_0B0D88(char *p);
extern void func_130E70(int a);
extern int func_130070(char *a, char *b, char *c, int d);
extern int func_130608(char *a, int b, int c);
extern void func_130548(char *a, char *b);
extern void func_016980(void);
extern int func_026CE8(int a, int b);
extern void func_01A660(int a);
extern void func_036348(void);
extern int *func_023F90(int a, int b);
extern void func_096BC0(void);
extern void func_0989C0(void);
extern void func_0A0788(void);
extern void func_034030(void);

void func_016E58(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0B1930();
    s = D_0023E540;
    func_0B0D88(s + 0x30);
    func_130E70(1);
    if (D_001FCFAC != 0) {
        mode = D_001FCFAC->mode;
    }
    r = D_00391120;
    func_130070(r, D_0035B120, D_00214D38, 0x2E000);
    if (func_130608(r, (unsigned char)mode, 1)) {
        func_130548(r, D_00204F88);
    }
    r = D_00391168;
    func_130070(r, D_00389120, D_00214D58, 0x8000);
    if (func_130608(r, (unsigned char)mode, 0)) {
        func_130548(r, buf);
    }
    func_016980();
    v = func_026CE8(0x90, 0xFF);
    if (v) {
        func_01A660(v);
    }
    func_036348();
    if (s != 0) {
        o = func_023F90(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_096BC0();
    func_0989C0();
    func_0A0788();
    func_034030();
}
