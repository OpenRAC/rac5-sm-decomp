extern unsigned char D_0037F838[];
extern int D_0025FE18[];
extern char D_00260350[];
extern char D_00260378[];
extern void func_0FA888(void *dst, void *src);
extern void func_0FB0F8(void *dst, int value, void *buf, void *table);

void func_0FB190(int index)
{
    int offset = index * 100;

    if (D_0037F838[offset] == 0) {
        char buf[16];
        int value = D_0025FE18[index * 9];

        func_0FA888(buf, &D_0025FE18[index * 9]);
        func_0FB0F8(D_0037F838 + offset + 4, value, buf, D_00260350);
        func_0FB0F8(D_0037F838 + offset + 0x34, value, buf, D_00260378);
        D_0037F838[offset] = 1;
    }
}
