/* LEVEL_23:0x0C0BE8 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001D4654;
extern int D_001D4650;
extern int D_001D464C;
extern void func_0CDD80(int a0, int a1, int a2, int a3);
extern unsigned int func_0CD888(void);
extern unsigned int func_0CD898(void);
extern int func_0ACDE8(int index);
extern void func_0CDB60(int a0);
extern void func_019338(int a0, int a1);

void func_0C0BE8(void)
{
    unsigned int status;

    status = 0;
    if (D_001D4654 == 1) {
        func_0CDD80(1, D_001D464C, D_001D4650, 0);
        status = func_0CD888();
    }
    if (status == 1 || func_0CD898() == 0) {
        func_0ACDE8(0);
        func_0CDB60(0);
        func_019338(4, 0);
    }
}
