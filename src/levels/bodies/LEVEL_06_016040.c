/* LEVEL_06:0x016040 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_001E2EAC;
extern char D_00221EC0[];
extern char D_00374AA0[];
extern char D_0033EAA0[];
extern char D_001FAC38[];
extern char D_001EAE88[];
extern char D_00374AE8[];
extern char D_0036CAA0[];
extern char D_001FAC58[];
extern void func_0AAFE8(void);
extern void func_0AA440(char *p);
extern void func_1296E0(int a);
extern int func_1288E0(char *a, char *b, char *c, int d);
extern int func_128E78(char *a, int b, int c);
extern void func_128DB8(char *a, char *b);
extern void func_015B68(void);
extern int func_0258B8(int a, int b);
extern void func_0197E0(int a);
extern void func_0343E8(void);
extern int *func_022D30(int a, int b);
extern void func_08F4A0(void);
extern void func_091208(void);
extern void func_099E80(void);
extern void func_032328(void);

void func_016040(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0AAFE8();
    s = D_00221EC0;
    func_0AA440(s + 0x30);
    func_1296E0(1);
    if (D_001E2EAC != 0) {
        mode = D_001E2EAC->mode;
    }
    r = D_00374AA0;
    func_1288E0(r, D_0033EAA0, D_001FAC38, 0x2E000);
    if (func_128E78(r, (unsigned char)mode, 1)) {
        func_128DB8(r, D_001EAE88);
    }
    r = D_00374AE8;
    func_1288E0(r, D_0036CAA0, D_001FAC58, 0x8000);
    if (func_128E78(r, (unsigned char)mode, 0)) {
        func_128DB8(r, buf);
    }
    func_015B68();
    v = func_0258B8(0x90, 0xFF);
    if (v) {
        func_0197E0(v);
    }
    func_0343E8();
    if (s != 0) {
        o = func_022D30(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_08F4A0();
    func_091208();
    func_099E80();
    func_032328();
}
