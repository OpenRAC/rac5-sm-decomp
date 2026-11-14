/* LEVEL_10:0x0CB200 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_0020A254;
extern int D_0020A250;
extern int D_0020A24C;
extern void func_0D8390(int a0, int a1, int a2, int a3);
extern unsigned int func_0D7E98(void);
extern unsigned int func_0D7EA8(void);
extern int func_0B71F8(int index);
extern void func_0D8170(int a0);
extern void func_019EA8(int a0, int a1);

void func_0CB200(void)
{
    unsigned int status;

    status = 0;
    if (D_0020A254 == 1) {
        func_0D8390(1, D_0020A24C, D_0020A250, 0);
        status = func_0D7E98();
    }
    if (status == 1 || func_0D7EA8() == 0) {
        func_0B71F8(0);
        func_0D8170(0);
        func_019EA8(4, 0);
    }
}
