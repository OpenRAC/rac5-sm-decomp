/* LEVEL_04:0x0CF5D8 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_0021A714;
extern int D_0021A710;
extern int D_0021A70C;
extern void func_0DC800(int a0, int a1, int a2, int a3);
extern unsigned int func_0DC308(void);
extern unsigned int func_0DC318(void);
extern int func_0BB828(int index);
extern void func_0DC5E0(int a0);
extern void func_01A4A8(int a0, int a1);

void func_0CF5D8(void)
{
    unsigned int status;

    status = 0;
    if (D_0021A714 == 1) {
        func_0DC800(1, D_0021A70C, D_0021A710, 0);
        status = func_0DC308();
    }
    if (status == 1 || func_0DC318() == 0) {
        func_0BB828(0);
        func_0DC5E0(0);
        func_01A4A8(4, 0);
    }
}
