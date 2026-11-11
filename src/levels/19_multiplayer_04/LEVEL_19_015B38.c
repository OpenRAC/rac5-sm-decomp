/* LEVEL_19:0x015B38 -- placement copy of LEVEL_16_015D78.c: level setup: registers two resource blocks with their sources and then runs the fixed list of subsystem init calls. */

typedef struct {
    char pad_00[0x3C];
    int w_3C;
} Info;

extern char D_001E4210[];
extern Info *D_001A2C34;
extern char D_002D5D40[];
extern char D_002D5D88[];
extern char D_0029FD40[];
extern char D_002CDD40[];
extern char D_001C1FA8[];
extern char D_001C1FC8[];
extern char D_001AB0C8[];

extern void func_09E880(void);
extern void func_09DBF0(char *p);
extern void func_110438(int n);
extern int func_10F730(char *a, char *b, char *c, int n);
extern int func_10FCC8(char *a, unsigned char b, int c);
extern void func_10FC08(char *a, char *b);
extern void func_0155F0(void);
extern int func_024A50(int a, int b);
extern void func_019108(int a);
extern void func_032EF8(void);
extern void func_0878E8(void);
extern void func_089520(void);
extern void func_08E228(void);
extern void func_030DE0(void);
extern void func_1137A8(void);

void func_015B38(void)
{
    int t;
    int r;
    char *p;
    char loc[0x40];

    t = 0;
    func_09E880();
    p = D_001E4210;
    func_09DBF0(p + 0x30);
    func_110438(1);
    if (D_001A2C34 != 0) {
        t = D_001A2C34->w_3C;
    }
    func_10F730(D_002D5D40, D_0029FD40, D_001C1FA8, 0x2E000);
    if (func_10FCC8(D_002D5D40, t, 1) != 0) {
        func_10FC08(D_002D5D40, D_001AB0C8);
    }
    func_10F730(D_002D5D88, D_002CDD40, D_001C1FC8, 0x8000);
    if (func_10FCC8(D_002D5D88, t, 0) != 0) {
        func_10FC08(D_002D5D88, loc);
    }
    func_0155F0();
    r = func_024A50(0x90, 0xFF);
    if (r != 0) {
        func_019108(r);
    }
    func_032EF8();
    func_0878E8();
    func_089520();
    func_08E228();
    func_030DE0();
    func_1137A8();
}
