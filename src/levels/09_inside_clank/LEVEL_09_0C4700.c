/* LEVEL_09:0x0C4700 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001EAA0C;
extern unsigned char D_001EA9B1;
extern int D_001EAA14;
extern void func_12E678(int *p, int a1);

void func_0C4700(int *p)
{
    if (D_001EAA0C == 1) {
        D_001EA9B1 = 1;
        func_12E678(p, 0x1F);
    } else {
        func_12E678(p, D_001EAA14);
    }
}
