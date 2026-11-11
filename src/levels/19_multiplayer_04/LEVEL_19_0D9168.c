extern unsigned char D_0027E7B8[];
extern int D_001CC258[];
extern char D_001CC790[];
extern char D_001CC7B8[];
extern void func_0D8860(void *dst, void *src);
extern void func_0D90D0(void *dst, int value, void *buf, void *table);

void func_0D9168(int index)
{
    int offset = index * 100;

    if (D_0027E7B8[offset] == 0) {
        char buf[16];
        int value = D_001CC258[index * 9];

        func_0D8860(buf, &D_001CC258[index * 9]);
        func_0D90D0(D_0027E7B8 + offset + 4, value, buf, D_001CC790);
        func_0D90D0(D_0027E7B8 + offset + 0x34, value, buf, D_001CC7B8);
        D_0027E7B8[offset] = 1;
    }
}
