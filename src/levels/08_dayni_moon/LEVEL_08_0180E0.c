/* LEVEL_08:0x0180E0 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_0023CB2C;
extern char D_002843D0[];
extern char D_003D6FA0[];
extern char D_003A0FA0[];
extern char D_00255A38[];
extern char D_00244E48[];
extern char D_003D6FE8[];
extern char D_003CEFA0[];
extern char D_00255A58[];
extern void func_0BB150(void);
extern void func_0BA5A8(char *p);
extern void func_144548(int a);
extern int func_143748(char *a, char *b, char *c, int d);
extern int func_143CE0(char *a, int b, int c);
extern void func_143C20(char *a, char *b);
extern void func_017C08(void);
extern int func_027A30(int a, int b);
extern void func_01B958(int a);
extern void func_03CA68(void);
extern int *func_024EA8(int a, int b);
extern void func_09E770(void);
extern void func_0A0598(void);
extern void func_0A9FA8(void);
extern void func_03A750(void);

void func_0180E0(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0BB150();
    s = D_002843D0;
    func_0BA5A8(s + 0x30);
    func_144548(1);
    if (D_0023CB2C != 0) {
        mode = D_0023CB2C->mode;
    }
    r = D_003D6FA0;
    func_143748(r, D_003A0FA0, D_00255A38, 0x2E000);
    if (func_143CE0(r, (unsigned char)mode, 1)) {
        func_143C20(r, D_00244E48);
    }
    r = D_003D6FE8;
    func_143748(r, D_003CEFA0, D_00255A58, 0x8000);
    if (func_143CE0(r, (unsigned char)mode, 0)) {
        func_143C20(r, buf);
    }
    func_017C08();
    v = func_027A30(0x90, 0xFF);
    if (v) {
        func_01B958(v);
    }
    func_03CA68();
    if (s != 0) {
        o = func_024EA8(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_09E770();
    func_0A0598();
    func_0A9FA8();
    func_03A750();
}
