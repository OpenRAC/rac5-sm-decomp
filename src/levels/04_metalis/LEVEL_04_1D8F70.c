/* LEVEL_04:0x1D8F70 -- resets slot 4 and caches two handles made from the packed ids in the settings block, then copies one entry between the two tables. */
typedef struct {
    int w_00;
    int a_04;
    int b_08;
} Settings;

extern Settings D_002B25C0;
extern int D_0022272C;
extern int D_00222730;
extern int D_003B3C78[];
extern int D_00243CA8[];
extern void func_0F6C80(int index);
extern int func_10C970(unsigned int value);
extern int func_0E8A88(unsigned int value);
extern void func_136488(int *dst, int *src, int n);

void func_1D8F70(void)
{
    func_0F6C80(4);
    D_0022272C = func_10C970((D_002B25C0.a_04 << 16) | 0xA80030C5U);
    D_00222730 = func_0E8A88((D_002B25C0.b_08 << 16) | 0xA00070D9U);
    func_136488(D_003B3C78, D_00243CA8, 1);
}
