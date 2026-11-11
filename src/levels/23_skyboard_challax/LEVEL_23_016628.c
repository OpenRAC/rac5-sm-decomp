/* LEVEL_23:0x016628 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_001C73AC;
extern char D_002025C0[];
extern char D_00359260[];
extern char D_00323260[];
extern char D_001DEF38[];
extern char D_001CF388[];
extern char D_003592A8[];
extern char D_00351260[];
extern char D_001DEF58[];
extern void func_0A7588(void);
extern void func_0A69E0(char *p);
extern void func_124788(int a);
extern int func_123988(char *a, char *b, char *c, int d);
extern int func_123F20(char *a, int b, int c);
extern void func_123E60(char *a, char *b);
extern void func_016150(void);
extern int func_025160(int a, int b);
extern void func_019AF0(int a);
extern void func_030EC8(void);
extern int *func_0226C8(int a, int b);
extern void func_08C270(void);
extern void func_08DE80(void);
extern void func_0963F0(void);
extern void func_02F0B0(void);

void func_016628(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0A7588();
    s = D_002025C0;
    func_0A69E0(s + 0x30);
    func_124788(1);
    if (D_001C73AC != 0) {
        mode = D_001C73AC->mode;
    }
    r = D_00359260;
    func_123988(r, D_00323260, D_001DEF38, 0x2E000);
    if (func_123F20(r, (unsigned char)mode, 1)) {
        func_123E60(r, D_001CF388);
    }
    r = D_003592A8;
    func_123988(r, D_00351260, D_001DEF58, 0x8000);
    if (func_123F20(r, (unsigned char)mode, 0)) {
        func_123E60(r, buf);
    }
    func_016150();
    v = func_025160(0x90, 0xFF);
    if (v) {
        func_019AF0(v);
    }
    func_030EC8();
    if (s != 0) {
        o = func_0226C8(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_08C270();
    func_08DE80();
    func_0963F0();
    func_02F0B0();
}
