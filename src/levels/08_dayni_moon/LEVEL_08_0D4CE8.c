/* LEVEL_08:0x0D4CE8 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_0024A114;
extern int D_0024A110;
extern int D_0024A10C;
extern void func_0E1F10(int a0, int a1, int a2, int a3);
extern unsigned int func_0E1A18(void);
extern unsigned int func_0E1A28(void);
extern int func_0C0F10(int index);
extern void func_0E1CF0(int a0);
extern void func_01B1A0(int a0, int a1);

void func_0D4CE8(void)
{
    unsigned int status;

    status = 0;
    if (D_0024A114 == 1) {
        func_0E1F10(1, D_0024A10C, D_0024A110, 0);
        status = func_0E1A18();
    }
    if (status == 1 || func_0E1A28() == 0) {
        func_0C0F10(0);
        func_0E1CF0(0);
        func_01B1A0(4, 0);
    }
}
