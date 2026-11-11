/* LEVEL_08:0x20C2E0 -- placement copy of LEVEL_04_1E4710.c: lazily creates three handles and initialises a fourth object. */
extern int D_002529FC;
extern int D_00252A00;
extern int D_00252A04;
extern int D_00252A08;
extern int D_002E7118;
extern int D_002E70F0;
extern int D_002E70F8;
extern int D_003EB3D0;
extern int D_00278F60;

extern int func_10F588(int key);
extern int func_10A298(int key);
extern void func_109870(int *p);
extern int func_110E80(int key);
extern void func_13B540(int *p, int *q, int n);

void func_20C2E0(void)
{
    if (D_002529FC == -1)
        D_002529FC = func_10F588((D_002E7118 << 16) | 0xC00070C1);
    if (D_00252A00 == -1) {
        D_00252A00 = func_10A298((D_002E70F0 << 16) | 0xC0001044);
        func_109870(&D_00252A08);
    }
    if (D_00252A04 == -1)
        D_00252A04 = func_110E80((D_002E70F8 << 16) | 0xC00010C1);
    if (D_003EB3D0 == 0)
        func_13B540(&D_003EB3D0, &D_00278F60, 3);
}
