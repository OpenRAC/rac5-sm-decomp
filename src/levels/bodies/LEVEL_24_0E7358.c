extern unsigned char D_002FC478[];
extern int D_001E6F18[];
extern char D_001E7450[];
extern char D_001E7478[];
extern void func_0E6A50(void *dst, void *src);
extern void func_0E72C0(void *dst, int value, void *buf, void *table);

void func_0E7358(int index)
{
    int offset = index * 100;

    if (D_002FC478[offset] == 0) {
        char buf[16];
        int value = D_001E6F18[index * 9];

        func_0E6A50(buf, &D_001E6F18[index * 9]);
        func_0E72C0(D_002FC478 + offset + 4, value, buf, D_001E7450);
        func_0E72C0(D_002FC478 + offset + 0x34, value, buf, D_001E7478);
        D_002FC478[offset] = 1;
    }
}
