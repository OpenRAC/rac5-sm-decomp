/* LEVEL_08:0x1B3658 -- creates the level's handles: one from a packed id and four from small selector codes, then copies the 8-word default table. */
extern unsigned int D_002E70D0;
extern int D_00251BCC;
extern int D_00251BD0;
extern int D_00251BD4;
extern int D_00251BD8;
extern int D_00251BDC;
extern int D_003E7BA0[];
extern int D_0026F850[];

extern int func_110E80(unsigned int value);
extern int func_025DC0(int value);
extern void func_13B540(int *dst, int *src, int n);

void func_1B3658(void)
{
    D_00251BCC = func_110E80((D_002E70D0 << 16) | 0xA00070D9);
    D_00251BD0 = func_025DC0(3);
    D_00251BD4 = func_025DC0(4);
    D_00251BD8 = func_025DC0(1);
    D_00251BDC = func_025DC0(2);
    func_13B540(D_003E7BA0, D_0026F850, 8);
}
