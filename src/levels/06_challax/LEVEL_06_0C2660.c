/* LEVEL_06:0x0C2660 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001EFB0C;
extern unsigned char D_001EFAB0;
extern int D_001EFB14;
extern void func_12BDB0(int *p, int a1);

void func_0C2660(int *p)
{
    if (D_001EFB0C == 1) {
        func_12BDB0(p, 10);
    } else if (D_001EFAB0 != 0) {
        D_001EFB14 = 0x1D;
        func_12BDB0(p, 0x13);
    } else {
        func_12BDB0(p, 0x1E);
    }
}
