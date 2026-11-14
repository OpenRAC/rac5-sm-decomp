/* LEVEL_17:0x0B86C8 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001A26FC;
extern int D_001A26F8;
extern int D_001A26F4;
extern void func_0C5B88(int a0, int a1, int a2, int a3);
extern unsigned int func_0C5690(void);
extern unsigned int func_0C56A0(void);
extern int func_0A4590(int index);
extern void func_0C5968(int a0);
extern void func_018518(int a0, int a1);

void func_0B86C8(void)
{
    unsigned int status;

    status = 0;
    if (D_001A26FC == 1) {
        func_0C5B88(1, D_001A26F4, D_001A26F8, 0);
        status = func_0C5690();
    }
    if (status == 1 || func_0C56A0() == 0) {
        func_0A4590(0);
        func_0C5968(0);
        func_018518(4, 0);
    }
}
