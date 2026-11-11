extern unsigned char D_003019F8[];
extern int D_001E9318[];
extern char D_001E9850[];
extern char D_001E9878[];
extern void func_0E1D28(void *dst, void *src);
extern void func_0E2598(void *dst, int value, void *buf, void *table);

void func_0E2630(int index)
{
    int offset = index * 100;

    if (D_003019F8[offset] == 0) {
        char buf[16];
        int value = D_001E9318[index * 9];

        func_0E1D28(buf, &D_001E9318[index * 9]);
        func_0E2598(D_003019F8 + offset + 4, value, buf, D_001E9850);
        func_0E2598(D_003019F8 + offset + 0x34, value, buf, D_001E9878);
        D_003019F8[offset] = 1;
    }
}
