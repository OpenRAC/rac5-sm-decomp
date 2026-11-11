/* LEVEL_08:0x20F468 -- calls a helper on the record, then clears its state words. */

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

void func_091098(struct Rec20F468 *a0);

void func_20F468(struct Rec20F468 *a0)
{
    func_091098(a0);
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
