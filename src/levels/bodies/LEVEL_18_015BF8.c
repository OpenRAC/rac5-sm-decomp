/* LEVEL_18:0x015BF8 -- placement copy of LEVEL_16_0164E8.c: redraws the overlay: draws every enabled item from the tables, then the optional trailing element. */

struct Item {
    char pad_00[0x40];
};

extern unsigned char D_0019C1B4;
extern int D_0019C1B0;
extern unsigned char D_0019C313;
extern int D_0019C1AC;
extern int D_0019C1BC;
extern struct Item D_001DE970[];
extern int D_001DEB90[];
extern int D_001DEB70[];
extern char D_001DE930[];

extern int func_08EC28(int a);
extern void func_08EC00(int a);
extern void func_0906D8(int a);
extern void func_08EBE0(int a);
extern void func_076DA0(struct Item *p, int a, int b, unsigned int c);
extern void func_0773C8(char *p, int a, int b, int c, int d, int e, unsigned int f);

void func_015BF8(void)
{
    int i;
    int flag;
    int bit;

    flag = func_08EC28(7) != 0;
    func_08EC00(7);
    func_0906D8(0);
    func_08EC00(1);
    for (i = 0; i < D_0019C1B4; i++) {
        bit = D_0019C1B0 & (1 << i);
        if (bit != 0) {
            func_076DA0(&D_001DE970[i], D_001DEB90[i], D_001DEB70[i], 0xFFFFFFFF);
        }
    }
    func_0906D8(1);
    func_08EBE0(1);
    if (flag) {
        func_08EBE0(7);
    }
    if (D_0019C313) {
        func_0773C8(D_001DE930, D_0019C1AC, D_0019C1BC, 1, 0, 1, 0xFFFFFFFF);
    }
}
