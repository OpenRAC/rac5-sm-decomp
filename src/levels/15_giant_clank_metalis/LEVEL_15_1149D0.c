extern unsigned char D_002F24B0[];
extern int D_00170490[];
extern char D_00170640[];
extern char D_00170668[];
extern void func_113F88(void *dst, void *src);
extern void func_114940(void *dst, int value, void *buf, void *table);

void func_1149D0(int index)
{
    int offset = index * 100;

    if (D_002F24B0[offset] == 0) {
        char buf[16];
        int value = D_00170490[index * 9];

        func_113F88(buf, &D_00170490[index * 9]);
        func_114940(D_002F24B0 + offset + 4, value, buf, D_00170640);
        func_114940(D_002F24B0 + offset + 0x34, value, buf, D_00170668);
        D_002F24B0[offset] = 1;
    }
}
