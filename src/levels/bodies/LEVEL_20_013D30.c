/* LEVEL_20:0x013D30 -- placement copy of LEVEL_16_015D78.c: level setup: registers two resource blocks with their sources and then runs the fixed list of subsystem init calls. */

typedef struct {
    char pad_00[0x3C];
    int w_3C;
} Info;

extern char D_0013BA10[];
extern Info *D_00104194;
extern char D_001F9120[];
extern char D_001F9168[];
extern char D_001C3120[];
extern char D_001F1120[];
extern char D_00121E28[];
extern char D_00121E48[];
extern char D_0010C628[];

extern void func_0896E8(void);
extern void func_088A58(char *p);
extern void func_0E2B80(int n);
extern int func_0E1E78(char *a, char *b, char *c, int n);
extern int func_0E2410(char *a, unsigned char b, int c);
extern void func_0E2350(char *a, char *b);
extern void func_0137E8(void);
extern int func_021A20(int a, int b);
extern void func_0171C0(int a);
extern void func_02DF50(void);
extern void func_074C70(void);
extern void func_076810(void);
extern void func_079298(void);
extern void func_02C0E0(void);
extern void func_0E5B70(void);

void func_013D30(void)
{
    int t;
    int r;
    char *p;
    char loc[0x40];

    t = 0;
    func_0896E8();
    p = D_0013BA10;
    func_088A58(p + 0x30);
    func_0E2B80(1);
    if (D_00104194 != 0) {
        t = D_00104194->w_3C;
    }
    func_0E1E78(D_001F9120, D_001C3120, D_00121E28, 0x2E000);
    if (func_0E2410(D_001F9120, t, 1) != 0) {
        func_0E2350(D_001F9120, D_0010C628);
    }
    func_0E1E78(D_001F9168, D_001F1120, D_00121E48, 0x8000);
    if (func_0E2410(D_001F9168, t, 0) != 0) {
        func_0E2350(D_001F9168, loc);
    }
    func_0137E8();
    r = func_021A20(0x90, 0xFF);
    if (r != 0) {
        func_0171C0(r);
    }
    func_02DF50();
    func_074C70();
    func_076810();
    func_079298();
    func_02C0E0();
    func_0E5B70();
}
