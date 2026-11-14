/* LEVEL_20:0x0A36B8 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001117DC;
extern int D_001117D8;
extern int D_001117D4;
extern void func_0B0B78(int a0, int a1, int a2, int a3);
extern unsigned int func_0B0680(void);
extern unsigned int func_0B0690(void);
extern int func_08F6B0(int index);
extern void func_0B0958(int a0);
extern void func_016950(int a0, int a1);

void func_0A36B8(void)
{
    unsigned int status;

    status = 0;
    if (D_001117DC == 1) {
        func_0B0B78(1, D_001117D4, D_001117D8, 0);
        status = func_0B0680();
    }
    if (status == 1 || func_0B0690() == 0) {
        func_08F6B0(0);
        func_0B0958(0);
        func_016950(4, 0);
    }
}
