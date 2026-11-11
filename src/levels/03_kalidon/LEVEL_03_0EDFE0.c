extern unsigned char D_0034B438[];
extern int D_0022F098[];
extern char D_0022F5D0[];
extern char D_0022F5F8[];
extern void func_0ED6D8(void *dst, void *src);
extern void func_0EDF48(void *dst, int value, void *buf, void *table);

void func_0EDFE0(int index)
{
    int offset = index * 100;

    if (D_0034B438[offset] == 0) {
        char buf[16];
        int value = D_0022F098[index * 9];

        func_0ED6D8(buf, &D_0022F098[index * 9]);
        func_0EDF48(D_0034B438 + offset + 4, value, buf, D_0022F5D0);
        func_0EDF48(D_0034B438 + offset + 0x34, value, buf, D_0022F5F8);
        D_0034B438[offset] = 1;
    }
}
