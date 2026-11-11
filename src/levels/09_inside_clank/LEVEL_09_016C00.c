/* LEVEL_09:0x016C00 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_001DDDAC;
extern char D_0021C8C0[];
extern char D_0036F4A0[];
extern char D_003394A0[];
extern char D_001F59B8[];
extern char D_001E5D88[];
extern char D_0036F4E8[];
extern char D_003674A0[];
extern char D_001F59D8[];
extern void func_0ADAC8(void);
extern void func_0ACF20(char *p);
extern void func_12BFA8(int a);
extern int func_12B1A8(char *a, char *b, char *c, int d);
extern int func_12B740(char *a, int b, int c);
extern void func_12B680(char *a, char *b);
extern void func_016728(void);
extern int func_026410(int a, int b);
extern void func_01A3D0(int a);
extern void func_0341A0(void);
extern int *func_023920(int a, int b);
extern void func_092FA8(void);
extern void func_094DA8(void);
extern void func_09C960(void);
extern void func_0320E0(void);

void func_016C00(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0ADAC8();
    s = D_0021C8C0;
    func_0ACF20(s + 0x30);
    func_12BFA8(1);
    if (D_001DDDAC != 0) {
        mode = D_001DDDAC->mode;
    }
    r = D_0036F4A0;
    func_12B1A8(r, D_003394A0, D_001F59B8, 0x2E000);
    if (func_12B740(r, (unsigned char)mode, 1)) {
        func_12B680(r, D_001E5D88);
    }
    r = D_0036F4E8;
    func_12B1A8(r, D_003674A0, D_001F59D8, 0x8000);
    if (func_12B740(r, (unsigned char)mode, 0)) {
        func_12B680(r, buf);
    }
    func_016728();
    v = func_026410(0x90, 0xFF);
    if (v) {
        func_01A3D0(v);
    }
    func_0341A0();
    if (s != 0) {
        o = func_023920(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_092FA8();
    func_094DA8();
    func_09C960();
    func_0320E0();
}
