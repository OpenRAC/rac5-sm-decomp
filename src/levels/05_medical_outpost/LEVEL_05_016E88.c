/* LEVEL_05:0x016E88 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_001E332C;
extern char D_00220E40[];
extern char D_00373BE0[];
extern char D_0033DBE0[];
extern char D_001FACB8[];
extern char D_001EB308[];
extern char D_00373C28[];
extern char D_0036BBE0[];
extern char D_001FACD8[];
extern void func_0AEDD8(void);
extern void func_0AE230(char *p);
extern void func_12E988(int a);
extern int func_12DB88(char *a, char *b, char *c, int d);
extern int func_12E120(char *a, int b, int c);
extern void func_12E060(char *a, char *b);
extern void func_0169B0(void);
extern int func_026148(int a, int b);
extern void func_01A578(int a);
extern void func_0356A8(void);
extern int *func_0235C0(int a, int b);
extern void func_093F48(void);
extern void func_095B58(void);
extern void func_09DC60(void);
extern void func_0335E8(void);

void func_016E88(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0AEDD8();
    s = D_00220E40;
    func_0AE230(s + 0x30);
    func_12E988(1);
    if (D_001E332C != 0) {
        mode = D_001E332C->mode;
    }
    r = D_00373BE0;
    func_12DB88(r, D_0033DBE0, D_001FACB8, 0x2E000);
    if (func_12E120(r, (unsigned char)mode, 1)) {
        func_12E060(r, D_001EB308);
    }
    r = D_00373C28;
    func_12DB88(r, D_0036BBE0, D_001FACD8, 0x8000);
    if (func_12E120(r, (unsigned char)mode, 0)) {
        func_12E060(r, buf);
    }
    func_0169B0();
    v = func_026148(0x90, 0xFF);
    if (v) {
        func_01A578(v);
    }
    func_0356A8();
    if (s != 0) {
        o = func_0235C0(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_093F48();
    func_095B58();
    func_09DC60();
    func_0335E8();
}
