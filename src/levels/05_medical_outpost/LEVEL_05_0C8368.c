/* LEVEL_05:0x0C8368 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001F05D4;
extern int D_001F05D0;
extern int D_001F05CC;
extern void func_0D54F8(int a0, int a1, int a2, int a3);
extern unsigned int func_0D5000(void);
extern unsigned int func_0D5010(void);
extern int func_0B45C8(int index);
extern void func_0D52D8(int a0);
extern void func_019DC0(int a0, int a1);

void func_0C8368(void)
{
    unsigned int status;

    status = 0;
    if (D_001F05D4 == 1) {
        func_0D54F8(1, D_001F05CC, D_001F05D0, 0);
        status = func_0D5000();
    }
    if (status == 1 || func_0D5010() == 0) {
        func_0B45C8(0);
        func_0D52D8(0);
        func_019DC0(4, 0);
    }
}
