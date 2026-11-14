/* LEVEL_07:0x0CBE20 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_00215554;
extern int D_00215550;
extern int D_0021554C;
extern void func_0D8FB0(int a0, int a1, int a2, int a3);
extern unsigned int func_0D8AB8(void);
extern unsigned int func_0D8AC8(void);
extern int func_0B8080(int index);
extern void func_0D8D90(int a0);
extern void func_01AEE8(int a0, int a1);

void func_0CBE20(void)
{
    unsigned int status;

    status = 0;
    if (D_00215554 == 1) {
        func_0D8FB0(1, D_0021554C, D_00215550, 0);
        status = func_0D8AB8();
    }
    if (status == 1 || func_0D8AC8() == 0) {
        func_0B8080(0);
        func_0D8D90(0);
        func_01AEE8(4, 0);
    }
}
