/* LEVEL_01:0x0C7450 -- forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_00200C0C;
extern unsigned char D_00200BB1;
extern int D_00200C14;
extern void func_1356E0(int *p, int a1);

void func_0C7450(int *p)
{
    if (D_00200C0C == 1) {
        D_00200BB1 = 1;
        func_1356E0(p, 0x1F);
    } else {
        func_1356E0(p, D_00200C14);
    }
}
