extern unsigned char D_00286178[];
extern int D_00173618[];
extern char D_00173B50[];
extern char D_00173B78[];
extern void func_0D4D50(void *dst, void *src);
extern void func_0D55C0(void *dst, int value, void *buf, void *table);

void func_0D5658(int index)
{
    int offset = index * 100;

    if (D_00286178[offset] == 0) {
        char buf[16];
        int value = D_00173618[index * 9];

        func_0D4D50(buf, &D_00173618[index * 9]);
        func_0D55C0(D_00286178 + offset + 4, value, buf, D_00173B50);
        func_0D55C0(D_00286178 + offset + 0x34, value, buf, D_00173B78);
        D_00286178[offset] = 1;
    }
}
