/* LEVEL_03:0x1AA3E0 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002B2C40[];
extern unsigned int D_00221804;
extern unsigned int D_00221808;
extern int D_0022180C;
extern int D_00221810;
extern int D_00221814;
extern char D_00221888[];
extern char D_00222148[];

extern void func_1E9098(long long, long long, long long, long long);
extern void func_1F8CB8(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EDFE0(int index);

void func_1AA3E0(void)
{
    D_00221804 = (D_00221804 & 0xF800FFFFu) | ((unsigned int)D_002B2C40[90] << 16);
    D_00221808 = (D_00221808 & 0xF800FFFFu) | ((unsigned int)D_002B2C40[128] << 16);
    D_00221814 = ((int (*)(unsigned int, char *, char *, void *))func_1E9098)(
        ((unsigned int)D_002B2C40[127] << 16) | 0x800060D9u, D_00221888, D_00222148, 0);
    func_1F8CB8(&D_0022180C, D_00221804, &D_00221810, D_00221808, 0);
    func_0EDFE0(7);
}
