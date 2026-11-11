/* LEVEL_24:0x016460 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_001C4C2C;
extern char D_00201040[];
extern char D_00353BE0[];
extern char D_0031DBE0[];
extern char D_001DCB38[];
extern char D_001CCC08[];
extern char D_00353C28[];
extern char D_0034BBE0[];
extern char D_001DCB58[];
extern void func_0AA090(void);
extern void func_0A94E8(char *p);
extern void func_128B10(int a);
extern int func_127D10(char *a, char *b, char *c, int d);
extern int func_1282A8(char *a, int b, int c);
extern void func_1281E8(char *a, char *b);
extern void func_015F88(void);
extern int func_024D38(int a, int b);
extern void func_0195D0(int a);
extern void func_030A90(void);
extern int *func_022400(int a, int b);
extern void func_08F650(void);
extern void func_091450(void);
extern void func_098F28(void);
extern void func_02EC78(void);

void func_016460(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0AA090();
    s = D_00201040;
    func_0A94E8(s + 0x30);
    func_128B10(1);
    if (D_001C4C2C != 0) {
        mode = D_001C4C2C->mode;
    }
    r = D_00353BE0;
    func_127D10(r, D_0031DBE0, D_001DCB38, 0x2E000);
    if (func_1282A8(r, (unsigned char)mode, 1)) {
        func_1281E8(r, D_001CCC08);
    }
    r = D_00353C28;
    func_127D10(r, D_0034BBE0, D_001DCB58, 0x8000);
    if (func_1282A8(r, (unsigned char)mode, 0)) {
        func_1281E8(r, buf);
    }
    func_015F88();
    v = func_024D38(0x90, 0xFF);
    if (v) {
        func_0195D0(v);
    }
    func_030A90();
    if (s != 0) {
        o = func_022400(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_08F650();
    func_091450();
    func_098F28();
    func_02EC78();
}
