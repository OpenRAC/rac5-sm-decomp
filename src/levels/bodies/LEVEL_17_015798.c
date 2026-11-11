/* LEVEL_17:0x015798 -- placement copy of LEVEL_16_015D78.c: level setup: registers two resource blocks with their sources and then runs the fixed list of subsystem init calls. */

typedef struct {
    char pad_00[0x3C];
    int w_3C;
} Info;

extern char D_001D5390[];
extern Info *D_001950B4;
extern char D_002C6EC0[];
extern char D_002C6F08[];
extern char D_00290EC0[];
extern char D_002BEEC0[];
extern char D_001B4228[];
extern char D_001B4248[];
extern char D_0019D548[];

extern void func_09E4E8(void);
extern void func_09D858(char *p);
extern void func_10F310(int n);
extern int func_10E608(char *a, char *b, char *c, int n);
extern int func_10EBA0(char *a, unsigned char b, int c);
extern void func_10EAE0(char *a, char *b);
extern void func_015250(void);
extern int func_024828(int a, int b);
extern void func_018D88(int a);
extern void func_0334B0(void);
extern void func_087E78(void);
extern void func_089AB0(void);
extern void func_08DE88(void);
extern void func_031398(void);
extern void func_112790(void);

void func_015798(void)
{
    int t;
    int r;
    char *p;
    char loc[0x40];

    t = 0;
    func_09E4E8();
    p = D_001D5390;
    func_09D858(p + 0x30);
    func_10F310(1);
    if (D_001950B4 != 0) {
        t = D_001950B4->w_3C;
    }
    func_10E608(D_002C6EC0, D_00290EC0, D_001B4228, 0x2E000);
    if (func_10EBA0(D_002C6EC0, t, 1) != 0) {
        func_10EAE0(D_002C6EC0, D_0019D548);
    }
    func_10E608(D_002C6F08, D_002BEEC0, D_001B4248, 0x8000);
    if (func_10EBA0(D_002C6F08, t, 0) != 0) {
        func_10EAE0(D_002C6F08, loc);
    }
    func_015250();
    r = func_024828(0x90, 0xFF);
    if (r != 0) {
        func_018D88(r);
    }
    func_0334B0();
    func_087E78();
    func_089AB0();
    func_08DE88();
    func_031398();
    func_112790();
}
