extern unsigned char D_0027E9B8[];
extern int D_001CC5D8[];
extern char D_001CCB10[];
extern char D_001CCB38[];
extern void func_0D7F60(void *dst, void *src);
extern void func_0D87D0(void *dst, int value, void *buf, void *table);

void func_0D8868(int index)
{
    int offset = index * 100;

    if (D_0027E9B8[offset] == 0) {
        char buf[16];
        int value = D_001CC5D8[index * 9];

        func_0D7F60(buf, &D_001CC5D8[index * 9]);
        func_0D87D0(D_0027E9B8 + offset + 4, value, buf, D_001CCB10);
        func_0D87D0(D_0027E9B8 + offset + 0x34, value, buf, D_001CCB38);
        D_0027E9B8[offset] = 1;
    }
}
