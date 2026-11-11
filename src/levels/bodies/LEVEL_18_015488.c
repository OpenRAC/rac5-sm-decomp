/* LEVEL_18:0x015488 -- placement copy of LEVEL_16_015D78.c: level setup: registers two resource blocks with their sources and then runs the fixed list of subsystem init calls. */

typedef struct {
    char pad_00[0x3C];
    int w_3C;
} Info;

extern char D_001E4410[];
extern Info *D_001A2F34;
extern char D_002D5F40[];
extern char D_002D5F88[];
extern char D_0029FF40[];
extern char D_002CDF40[];
extern char D_001C2328[];
extern char D_001C2348[];
extern char D_001AB3C8[];

extern void func_09E000(void);
extern void func_09D370(char *p);
extern void func_10EA48(int n);
extern int func_10DD40(char *a, char *b, char *c, int n);
extern int func_10E2D8(char *a, unsigned char b, int c);
extern void func_10E218(char *a, char *b);
extern void func_014F40(void);
extern int func_024458(int a, int b);
extern void func_018A50(int a);
extern void func_032438(void);
extern void func_086D80(void);
extern void func_0889B8(void);
extern void func_08D9A8(void);
extern void func_030320(void);
extern void func_111DB8(void);

void func_015488(void)
{
    int t;
    int r;
    char *p;
    char loc[0x40];

    t = 0;
    func_09E000();
    p = D_001E4410;
    func_09D370(p + 0x30);
    func_10EA48(1);
    if (D_001A2F34 != 0) {
        t = D_001A2F34->w_3C;
    }
    func_10DD40(D_002D5F40, D_0029FF40, D_001C2328, 0x2E000);
    if (func_10E2D8(D_002D5F40, t, 1) != 0) {
        func_10E218(D_002D5F40, D_001AB3C8);
    }
    func_10DD40(D_002D5F88, D_002CDF40, D_001C2348, 0x8000);
    if (func_10E2D8(D_002D5F88, t, 0) != 0) {
        func_10E218(D_002D5F88, loc);
    }
    func_014F40();
    r = func_024458(0x90, 0xFF);
    if (r != 0) {
        func_018A50(r);
    }
    func_032438();
    func_086D80();
    func_0889B8();
    func_08D9A8();
    func_030320();
    func_111DB8();
}
