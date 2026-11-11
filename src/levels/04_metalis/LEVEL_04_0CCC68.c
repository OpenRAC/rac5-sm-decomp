/* LEVEL_04:0x0CCC68 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_0021A0CC;
extern unsigned char D_0021A071;
extern int D_0021A0D4;
extern void func_141B60(int *p, int a1);

void func_0CCC68(int *p)
{
    if (D_0021A0CC == 1) {
        D_0021A071 = 1;
        func_141B60(p, 0x1F);
    } else {
        func_141B60(p, D_0021A0D4);
    }
}
