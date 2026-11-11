/* LEVEL_04:0x0174B0 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_0020D12C;
extern char D_0024F950[];
extern char D_003A2520[];
extern char D_0036C520[];
extern char D_00225738[];
extern char D_00215448[];
extern char D_003A2568[];
extern char D_0039A520[];
extern char D_00225758[];
extern void func_0B5A68(void);
extern void func_0B4EC0(char *p);
extern void func_13F490(int a);
extern int func_13E690(char *a, char *b, char *c, int d);
extern int func_13EC28(char *a, int b, int c);
extern void func_13EB68(char *a, char *b);
extern void func_016FD8(void);
extern int func_027098(int a, int b);
extern void func_01AC60(int a);
extern void func_038FE0(void);
extern int *func_0242A8(int a, int b);
extern void func_099948(void);
extern void func_09B600(void);
extern void func_0A48C0(void);
extern void func_036F20(void);

void func_0174B0(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0B5A68();
    s = D_0024F950;
    func_0B4EC0(s + 0x30);
    func_13F490(1);
    if (D_0020D12C != 0) {
        mode = D_0020D12C->mode;
    }
    r = D_003A2520;
    func_13E690(r, D_0036C520, D_00225738, 0x2E000);
    if (func_13EC28(r, (unsigned char)mode, 1)) {
        func_13EB68(r, D_00215448);
    }
    r = D_003A2568;
    func_13E690(r, D_0039A520, D_00225758, 0x8000);
    if (func_13EC28(r, (unsigned char)mode, 0)) {
        func_13EB68(r, buf);
    }
    func_016FD8();
    v = func_027098(0x90, 0xFF);
    if (v) {
        func_01AC60(v);
    }
    func_038FE0();
    if (s != 0) {
        o = func_0242A8(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_099948();
    func_09B600();
    func_0A48C0();
    func_036F20();
}
