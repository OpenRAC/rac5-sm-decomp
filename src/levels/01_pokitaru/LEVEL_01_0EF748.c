extern unsigned char D_003305B8[];
extern int D_00216198[];
extern char D_002166D0[];
extern char D_002166F8[];
extern void func_0EEE40(void *dst, void *src);
extern void func_0EF6B0(void *dst, int value, void *buf, void *table);

void func_0EF748(int index)
{
    int offset = index * 100;

    if (D_003305B8[offset] == 0) {
        char buf[16];
        int value = D_00216198[index * 9];

        func_0EEE40(buf, &D_00216198[index * 9]);
        func_0EF6B0(D_003305B8 + offset + 4, value, buf, D_002166D0);
        func_0EF6B0(D_003305B8 + offset + 0x34, value, buf, D_002166F8);
        D_003305B8[offset] = 1;
    }
}
