extern unsigned char D_0034ADB8[];
extern int D_0022FB18[];
extern char D_00230050[];
extern char D_00230078[];
extern void func_0F6378(void *dst, void *src);
extern void func_0F6BE8(void *dst, int value, void *buf, void *table);

void func_0F6C80(int index)
{
    int offset = index * 100;

    if (D_0034ADB8[offset] == 0) {
        char buf[16];
        int value = D_0022FB18[index * 9];

        func_0F6378(buf, &D_0022FB18[index * 9]);
        func_0F6BE8(D_0034ADB8 + offset + 4, value, buf, D_00230050);
        func_0F6BE8(D_0034ADB8 + offset + 0x34, value, buf, D_00230078);
        D_0034ADB8[offset] = 1;
    }
}
