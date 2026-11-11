/* LEVEL_19:0x0162A8 -- placement copy of LEVEL_16_0164E8.c: redraws the overlay: draws every enabled item from the tables, then the optional trailing element. */

struct Item {
    char pad_00[0x40];
};

extern unsigned char D_0019BEB4;
extern int D_0019BEB0;
extern unsigned char D_0019C013;
extern int D_0019BEAC;
extern int D_0019BEBC;
extern struct Item D_001DE770[];
extern int D_001DE990[];
extern int D_001DE970[];
extern char D_001DE730[];

extern int func_08F4A8(int a);
extern void func_08F480(int a);
extern void func_090F58(int a);
extern void func_08F460(int a);
extern void func_077908(struct Item *p, int a, int b, unsigned int c);
extern void func_077F30(char *p, int a, int b, int c, int d, int e, unsigned int f);

void func_0162A8(void)
{
    int i;
    int flag;
    int bit;

    flag = func_08F4A8(7) != 0;
    func_08F480(7);
    func_090F58(0);
    func_08F480(1);
    for (i = 0; i < D_0019BEB4; i++) {
        bit = D_0019BEB0 & (1 << i);
        if (bit != 0) {
            func_077908(&D_001DE770[i], D_001DE990[i], D_001DE970[i], 0xFFFFFFFF);
        }
    }
    func_090F58(1);
    func_08F460(1);
    if (flag) {
        func_08F460(7);
    }
    if (D_0019C013) {
        func_077F30(D_001DE730, D_0019BEAC, D_0019BEBC, 1, 0, 1, 0xFFFFFFFF);
    }
}
