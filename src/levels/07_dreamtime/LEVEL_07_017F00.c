/* LEVEL_07:0x017F00 -- placement copy of LEVEL_01_0177F0.c: brings up the front-end services: loads the two resource sets for the saved mode, runs the startup helpers and spawns the menu object. */

typedef struct {
    char pad_00[0x3C];
    int mode;
} Cfg;

extern Cfg *D_002082AC;
extern char D_0024AA40[];
extern char D_0039D620[];
extern char D_00367620[];
extern char D_00220AB8[];
extern char D_00210288[];
extern char D_0039D668[];
extern char D_00395620[];
extern char D_00220AD8[];
extern void func_0B2818(void);
extern void func_0B1C70(char *p);
extern void func_136010(int a);
extern int func_135210(char *a, char *b, char *c, int d);
extern int func_1357A8(char *a, int b, int c);
extern void func_1356E8(char *a, char *b);
extern void func_017A28(void);
extern int func_027768(int a, int b);
extern void func_01B6A0(int a);
extern void func_037EC8(void);
extern int *func_024BF0(int a, int b);
extern void func_0986D8(void);
extern void func_09A4D8(void);
extern void func_0A1688(void);
extern void func_035E08(void);

void func_017F00(void)
{
    int mode;
    char *s;
    char *r;
    char buf[0x40];
    int *o;
    int v;

    mode = 0;
    func_0B2818();
    s = D_0024AA40;
    func_0B1C70(s + 0x30);
    func_136010(1);
    if (D_002082AC != 0) {
        mode = D_002082AC->mode;
    }
    r = D_0039D620;
    func_135210(r, D_00367620, D_00220AB8, 0x2E000);
    if (func_1357A8(r, (unsigned char)mode, 1)) {
        func_1356E8(r, D_00210288);
    }
    r = D_0039D668;
    func_135210(r, D_00395620, D_00220AD8, 0x8000);
    if (func_1357A8(r, (unsigned char)mode, 0)) {
        func_1356E8(r, buf);
    }
    func_017A28();
    v = func_027768(0x90, 0xFF);
    if (v) {
        func_01B6A0(v);
    }
    func_037EC8();
    if (s != 0) {
        o = func_024BF0(0xC, *(int *)(s + 0xF8));
        o[0x40 / 4] = 0;
    }
    func_0986D8();
    func_09A4D8();
    func_0A1688();
    func_035E08();
}
