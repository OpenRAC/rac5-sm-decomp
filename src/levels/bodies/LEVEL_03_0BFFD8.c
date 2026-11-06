extern unsigned char D_002161E4;
extern char *D_0020C62C;
extern unsigned char D_0021EDC9;
extern void func_131668(int);
extern void func_027BB8(void);

void func_0BFFD8(void)
{
    if (D_002161E4 != 0)
        func_131668(*(int *)(D_0020C62C + 0x1c6c));
    func_027BB8();
    D_0021EDC9 = 0;
}
