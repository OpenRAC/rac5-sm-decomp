extern unsigned char D_0026F938[];
extern int D_001BE4D8[];
extern char D_001BEA10[];
extern char D_001BEA38[];
extern void func_0D90C8(void *dst, void *src);
extern void func_0D9938(void *dst, int value, void *buf, void *table);

void func_0D99D0(int index)
{
    int offset = index * 100;

    if (D_0026F938[offset] == 0) {
        char buf[16];
        int value = D_001BE4D8[index * 9];

        func_0D90C8(buf, &D_001BE4D8[index * 9]);
        func_0D9938(D_0026F938 + offset + 4, value, buf, D_001BEA10);
        func_0D9938(D_0026F938 + offset + 0x34, value, buf, D_001BEA38);
        D_0026F938[offset] = 1;
    }
}
