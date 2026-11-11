/* LEVEL_06:0x0C1D50 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001EFB0C;
extern unsigned char D_001EFAB1;
extern int D_001EFB14;
extern void func_12BDB0(int *p, int a1);

void func_0C1D50(int *p)
{
    if (D_001EFB0C == 1) {
        D_001EFAB1 = 1;
        func_12BDB0(p, 0x1F);
    } else {
        func_12BDB0(p, D_001EFB14);
    }
}
