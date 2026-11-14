/* LEVEL_19:0x0B8A60 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001B027C;
extern int D_001B0278;
extern int D_001B0274;
extern void func_0C5F20(int a0, int a1, int a2, int a3);
extern unsigned int func_0C5A28(void);
extern unsigned int func_0C5A38(void);
extern int func_0A4928(int index);
extern void func_0C5D00(int a0);
extern void func_018898(int a0, int a1);

void func_0B8A60(void)
{
    unsigned int status;

    status = 0;
    if (D_001B027C == 1) {
        func_0C5F20(1, D_001B0274, D_001B0278, 0);
        status = func_0C5A28();
    }
    if (status == 1 || func_0C5A38() == 0) {
        func_0A4928(0);
        func_0C5D00(0);
        func_018898(4, 0);
    }
}
