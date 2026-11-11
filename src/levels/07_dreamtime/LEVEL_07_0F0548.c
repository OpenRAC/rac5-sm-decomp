extern unsigned char D_00345EB8[];
extern int D_0022AE98[];
extern char D_0022B3D0[];
extern char D_0022B3F8[];
extern void func_0EFC40(void *dst, void *src);
extern void func_0F04B0(void *dst, int value, void *buf, void *table);

void func_0F0548(int index)
{
    int offset = index * 100;

    if (D_00345EB8[offset] == 0) {
        char buf[16];
        int value = D_0022AE98[index * 9];

        func_0EFC40(buf, &D_0022AE98[index * 9]);
        func_0F04B0(D_00345EB8 + offset + 4, value, buf, D_0022B3D0);
        func_0F04B0(D_00345EB8 + offset + 0x34, value, buf, D_0022B3F8);
        D_00345EB8[offset] = 1;
    }
}
