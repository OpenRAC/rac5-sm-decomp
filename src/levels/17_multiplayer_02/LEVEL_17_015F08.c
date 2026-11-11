/* LEVEL_17:0x015F08 -- placement copy of LEVEL_16_0164E8.c: redraws the overlay: draws every enabled item from the tables, then the optional trailing element. */

struct Item {
    char pad_00[0x40];
};

extern unsigned char D_0018E334;
extern int D_0018E330;
extern unsigned char D_0018E493;
extern int D_0018E32C;
extern int D_0018E33C;
extern struct Item D_001CF8F0[];
extern int D_001CFB10[];
extern int D_001CFAF0[];
extern char D_001CF8B0[];

extern int func_08F108(int a);
extern void func_08F0E0(int a);
extern void func_090BC0(int a);
extern void func_08F0C0(int a);
extern void func_077E98(struct Item *p, int a, int b, unsigned int c);
extern void func_0784C0(char *p, int a, int b, int c, int d, int e, unsigned int f);

void func_015F08(void)
{
    int i;
    int flag;
    int bit;

    flag = func_08F108(7) != 0;
    func_08F0E0(7);
    func_090BC0(0);
    func_08F0E0(1);
    for (i = 0; i < D_0018E334; i++) {
        bit = D_0018E330 & (1 << i);
        if (bit != 0) {
            func_077E98(&D_001CF8F0[i], D_001CFB10[i], D_001CFAF0[i], 0xFFFFFFFF);
        }
    }
    func_090BC0(1);
    func_08F0C0(1);
    if (flag) {
        func_08F0C0(7);
    }
    if (D_0018E493) {
        func_0784C0(D_001CF8B0, D_0018E32C, D_0018E33C, 1, 0, 1, 0xFFFFFFFF);
    }
}
