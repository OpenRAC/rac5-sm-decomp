extern unsigned char D_0031C478[];
extern int D_00205098[];
extern char D_002055D0[];
extern char D_002055F8[];
extern void func_0EAF80(void *dst, void *src);
extern void func_0EB7F0(void *dst, int value, void *buf, void *table);

void func_0EB888(int index)
{
    int offset = index * 100;

    if (D_0031C478[offset] == 0) {
        char buf[16];
        int value = D_00205098[index * 9];

        func_0EAF80(buf, &D_00205098[index * 9]);
        func_0EB7F0(D_0031C478 + offset + 4, value, buf, D_002055D0);
        func_0EB7F0(D_0031C478 + offset + 0x34, value, buf, D_002055F8);
        D_0031C478[offset] = 1;
    }
}
