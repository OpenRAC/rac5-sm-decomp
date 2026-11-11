/* LEVEL_08:0x21D9A0 -- initializes three cached values in local data, each once. */
extern int D_00253184;
extern int D_00253188;
extern int D_0025318C;
extern int D_002E7208;
extern int D_002E718C;
extern int func_110E80(int a);
extern int func_10D720(int a);
extern int func_13B5A0(int a);

void func_21D9A0(void)
{
    if (D_00253184 == -1) {
        D_00253184 = func_110E80((D_002E7208 << 16) | 0xA8003045);
    }
    if (D_00253188 == -1) {
        D_00253188 = func_10D720((D_002E718C << 16) | 0xC0001041);
    }
    if (D_0025318C == 0) {
        D_0025318C = func_13B5A0(0x75F6E6DB);
    }
}
