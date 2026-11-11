/* LEVEL_07:0x0C94B0 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_00214F0C;
extern unsigned char D_00214EB1;
extern int D_00214F14;
extern void func_1386E0(int *p, int a1);

void func_0C94B0(int *p)
{
    if (D_00214F0C == 1) {
        D_00214EB1 = 1;
        func_1386E0(p, 0x1F);
    } else {
        func_1386E0(p, D_00214F14);
    }
}
