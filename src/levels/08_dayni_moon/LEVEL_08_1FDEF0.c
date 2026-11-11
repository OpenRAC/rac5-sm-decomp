/* LEVEL_08:0x1FDEF0 -- placement copy of LEVEL_04_1D8F70.c: resets slot 4 and caches two handles made from the packed ids in the settings block, then copies one entry between the two tables. */
typedef struct {
    int w_00;
    int a_04;
    int b_08;
} Settings;

extern Settings D_002E7040;
extern int D_00252864;
extern int D_00252868;
extern int D_003EAD88[];
extern int D_00277F18[];
extern void func_0FB190(int index);
extern int func_110E80(unsigned int value);
extern int func_0EE198(unsigned int value);
extern void func_13B540(int *dst, int *src, int n);

void func_1FDEF0(void)
{
    func_0FB190(4);
    D_00252864 = func_110E80((D_002E7040.a_04 << 16) | 0xA80030C5U);
    D_00252868 = func_0EE198((D_002E7040.b_08 << 16) | 0xA00070D9U);
    func_13B540(D_003EAD88, D_00277F18, 1);
}
