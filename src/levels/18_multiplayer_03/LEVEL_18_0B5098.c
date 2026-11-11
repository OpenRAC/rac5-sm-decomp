/* LEVEL_18:0x0B5098 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001B0104;
extern unsigned char D_001B00A9;
extern int D_001B010C;
extern void func_110A60(int *p, int a1);

void func_0B5098(int *p)
{
    if (D_001B0104 == 1) {
        D_001B00A9 = 1;
        func_110A60(p, 0x1F);
    } else {
        func_110A60(p, D_001B010C);
    }
}
