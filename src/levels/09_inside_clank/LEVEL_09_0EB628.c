extern unsigned char D_00317D38[];
extern int D_001FFD98[];
extern char D_002002D0[];
extern char D_002002F8[];
extern void func_0EAD20(void *dst, void *src);
extern void func_0EB590(void *dst, int value, void *buf, void *table);

void func_0EB628(int index)
{
    int offset = index * 100;

    if (D_00317D38[offset] == 0) {
        char buf[16];
        int value = D_001FFD98[index * 9];

        func_0EAD20(buf, &D_001FFD98[index * 9]);
        func_0EB590(D_00317D38 + offset + 4, value, buf, D_002002D0);
        func_0EB590(D_00317D38 + offset + 0x34, value, buf, D_002002F8);
        D_00317D38[offset] = 1;
    }
}
