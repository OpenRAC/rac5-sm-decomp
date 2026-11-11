extern unsigned char D_00347AB8[];
extern int D_0022B118[];
extern char D_0022B650[];
extern char D_0022B678[];
extern void func_0F4FF0(void *dst, void *src);
extern void func_0F5860(void *dst, int value, void *buf, void *table);

void func_0F58F8(int index)
{
    int offset = index * 100;

    if (D_00347AB8[offset] == 0) {
        char buf[16];
        int value = D_0022B118[index * 9];

        func_0F4FF0(buf, &D_0022B118[index * 9]);
        func_0F5860(D_00347AB8 + offset + 4, value, buf, D_0022B650);
        func_0F5860(D_00347AB8 + offset + 0x34, value, buf, D_0022B678);
        D_00347AB8[offset] = 1;
    }
}
