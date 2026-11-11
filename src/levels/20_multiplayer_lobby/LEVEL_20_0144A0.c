/* LEVEL_20:0x0144A0 -- placement copy of LEVEL_16_0164E8.c: redraws the overlay: draws every enabled item from the tables, then the optional trailing element. */

struct Item {
    char pad_00[0x40];
};

extern unsigned char D_000FD41C;
extern int D_000FD418;
extern unsigned char D_000FD57B;
extern int D_000FD414;
extern int D_000FD424;
extern struct Item D_00135F70[];
extern int D_00136190[];
extern int D_00136170[];
extern char D_00135F30[];

extern int func_07A310(int a);
extern void func_07A2E8(int a);
extern void func_07BDC0(int a);
extern void func_07A2C8(int a);
extern void func_065090(struct Item *p, int a, int b, unsigned int c);
extern void func_0656B8(char *p, int a, int b, int c, int d, int e, unsigned int f);

void func_0144A0(void)
{
    int i;
    int flag;
    int bit;

    flag = func_07A310(7) != 0;
    func_07A2E8(7);
    func_07BDC0(0);
    func_07A2E8(1);
    for (i = 0; i < D_000FD41C; i++) {
        bit = D_000FD418 & (1 << i);
        if (bit != 0) {
            func_065090(&D_00135F70[i], D_00136190[i], D_00136170[i], 0xFFFFFFFF);
        }
    }
    func_07BDC0(1);
    func_07A2C8(1);
    if (flag) {
        func_07A2C8(7);
    }
    if (D_000FD57B) {
        func_0656B8(D_00135F30, D_000FD414, D_000FD424, 1, 0, 1, 0xFFFFFFFF);
    }
}
