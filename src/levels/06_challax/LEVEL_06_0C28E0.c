/* LEVEL_06:0x0C28E0 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001EFB0C;
extern unsigned char D_001EFAB0;
extern int D_001EFB14;
extern void func_12BDB0(int *p, int a1);

void func_0C28E0(int *p)
{
    if (D_001EFB0C == 1) {
        func_12BDB0(p, 12);
    } else if (D_001EFAB0 != 0) {
        D_001EFB14 = 29;
        func_12BDB0(p, 19);
    } else {
        func_12BDB0(p, 30);
    }
}
