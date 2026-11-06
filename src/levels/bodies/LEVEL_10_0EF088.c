extern unsigned char D_003399B8[];
extern int D_0021F118[];
extern char D_0021F650[];
extern char D_0021F678[];
extern void func_0EE780(void *dst, void *src);
extern void func_0EEFF0(void *dst, int value, void *buf, void *table);

void func_0EF088(int index)
{
    int offset = index * 100;

    if (D_003399B8[offset] == 0) {
        char buf[16];
        int value = D_0021F118[index * 9];

        func_0EE780(buf, &D_0021F118[index * 9]);
        func_0EEFF0(D_003399B8 + offset + 4, value, buf, D_0021F650);
        func_0EEFF0(D_003399B8 + offset + 0x34, value, buf, D_0021F678);
        D_003399B8[offset] = 1;
    }
}
