/* LEVEL_16:0x0164E8 -- redraws the overlay: draws every enabled item from the tables, then the optional trailing element. */

struct Item {
    char pad_00[0x40];
};

extern unsigned char D_0019AD34;
extern int D_0019AD30;
extern unsigned char D_0019AE93;
extern int D_0019AD2C;
extern int D_0019AD3C;
extern struct Item D_001DE5F0[];
extern int D_001DE810[];
extern int D_001DE7F0[];
extern char D_001DE5B0[];

extern int func_08FC10(int a);
extern void func_08FBE8(int a);
extern void func_0916C8(int a);
extern void func_08FBC8(int a);
extern void func_077420(struct Item *p, int a, int b, unsigned int c);
extern void func_077A48(char *p, int a, int b, int c, int d, int e, unsigned int f);

void func_0164E8(void)
{
    int i;
    int flag;
    int bit;

    flag = func_08FC10(7) != 0;
    func_08FBE8(7);
    func_0916C8(0);
    func_08FBE8(1);
    for (i = 0; i < D_0019AD34; i++) {
        bit = D_0019AD30 & (1 << i);
        if (bit != 0) {
            func_077420(&D_001DE5F0[i], D_001DE810[i], D_001DE7F0[i], 0xFFFFFFFF);
        }
    }
    func_0916C8(1);
    func_08FBC8(1);
    if (flag) {
        func_08FBC8(7);
    }
    if (D_0019AE93) {
        func_077A48(D_001DE5B0, D_0019AD2C, D_0019AD3C, 1, 0, 1, 0xFFFFFFFF);
    }
}
