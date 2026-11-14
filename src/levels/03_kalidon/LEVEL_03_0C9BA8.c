/* LEVEL_03:0x0C9BA8 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_002198D4;
extern int D_002198D0;
extern int D_002198CC;
extern void func_0D6D38(int a0, int a1, int a2, int a3);
extern unsigned int func_0D6840(void);
extern unsigned int func_0D6850(void);
extern int func_0B5E08(int index);
extern void func_0D6B18(int a0);
extern void func_01A590(int a0, int a1);

void func_0C9BA8(void)
{
    unsigned int status;

    status = 0;
    if (D_002198D4 == 1) {
        func_0D6D38(1, D_002198CC, D_002198D0, 0);
        status = func_0D6840();
    }
    if (status == 1 || func_0D6850() == 0) {
        func_0B5E08(0);
        func_0D6B18(0);
        func_01A590(4, 0);
    }
}
