/* LEVEL_21:0x0AA408 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_00155ED4;
extern int D_00155ED0;
extern int D_00155ECC;
extern void func_0B7590(int a0, int a1, int a2, int a3);
extern unsigned int func_0B7098(void);
extern unsigned int func_0B70A8(void);
extern int func_096530(int index);
extern void func_0B7370(int a0);
extern void func_016A10(int a0, int a1);

void func_0AA408(void)
{
    unsigned int status;

    status = 0;
    if (D_00155ED4 == 1) {
        func_0B7590(1, D_00155ECC, D_00155ED0, 0);
        status = func_0B7098();
    }
    if (status == 1 || func_0B70A8() == 0) {
        func_096530(0);
        func_0B7370(0);
        func_016A10(4, 0);
    }
}
