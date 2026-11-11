/* LEVEL_10:0x0C8890 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_00209C0C;
extern unsigned char D_00209BB1;
extern int D_00209C14;
extern void func_133560(int *p, int a1);

void func_0C8890(int *p)
{
    if (D_00209C0C == 1) {
        D_00209BB1 = 1;
        func_133560(p, 0x1F);
    } else {
        func_133560(p, D_00209C14);
    }
}
