/* LEVEL_06:0x0C46C0 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001F0154;
extern int D_001F0150;
extern int D_001F014C;
extern void func_0D1850(int a0, int a1, int a2, int a3);
extern unsigned int func_0D1358(void);
extern unsigned int func_0D1368(void);
extern int func_0B0848(int index);
extern void func_0D1630(int a0);
extern void func_019028(int a0, int a1);

void func_0C46C0(void)
{
    unsigned int status;

    status = 0;
    if (D_001F0154 == 1) {
        func_0D1850(1, D_001F014C, D_001F0150, 0);
        status = func_0D1358();
    }
    if (status == 1 || func_0D1368() == 0) {
        func_0B0848(0);
        func_0D1630(0);
        func_019028(4, 0);
    }
}
