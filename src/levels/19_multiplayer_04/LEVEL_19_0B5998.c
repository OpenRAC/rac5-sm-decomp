/* LEVEL_19:0x0B5998 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001AFE04;
extern unsigned char D_001AFDA9;
extern int D_001AFE0C;
extern void func_112450(int *p, int a1);

void func_0B5998(int *p)
{
    if (D_001AFE04 == 1) {
        D_001AFDA9 = 1;
        func_112450(p, 0x1F);
    } else {
        func_112450(p, D_001AFE0C);
    }
}
