/* LEVEL_15:0x13AE88 -- placement copy of LEVEL_08_20F468.c: calls a helper on the record, then clears its state words. */

struct Rec20F468 {
    char pad000[0xB4];
    int fB4;
    int fB8;
    int fBC;
    int fC0;
    int fC4;
    int fC8;
    int fCC;
    int fD0;
    char padD4[0x40];
    int f114;
    int f118;
    int f11C;
};

void func_06D610(struct Rec20F468 *a0);

void func_13AE88(struct Rec20F468 *a0)
{
    func_06D610(a0);
    a0->fB4 = 0;
    a0->fB8 = 0;
    a0->fBC = 0;
    a0->fC0 = 0;
    a0->fC4 = 0;
    a0->fC8 = 0;
    a0->fCC = 0;
    a0->fD0 = 0;
    a0->f114 = 0;
    a0->f118 = 0;
    a0->f11C = 0;
}
