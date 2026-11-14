/* LEVEL_24:0x0C3688 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001D1ED4;
extern int D_001D1ED0;
extern int D_001D1ECC;
extern void func_0D08A8(int a0, int a1, int a2, int a3);
extern unsigned int func_0D03B0(void);
extern unsigned int func_0D03C0(void);
extern int func_0AF8B0(int index);
extern void func_0D0688(int a0);
extern void func_018E18(int a0, int a1);

void func_0C3688(void)
{
    unsigned int status;

    status = 0;
    if (D_001D1ED4 == 1) {
        func_0D08A8(1, D_001D1ECC, D_001D1ED0, 0);
        status = func_0D03B0();
    }
    if (status == 1 || func_0D03C0() == 0) {
        func_0AF8B0(0);
        func_0D0688(0);
        func_018E18(4, 0);
    }
}
