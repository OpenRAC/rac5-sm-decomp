/* LEVEL_22:0x0B82F8 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001605D4;
extern int D_001605D0;
extern int D_001605CC;
extern void func_0C5490(int a0, int a1, int a2, int a3);
extern unsigned int func_0C4F98(void);
extern unsigned int func_0C4FA8(void);
extern int func_0A4570(int index);
extern void func_0C5270(int a0);
extern void func_016E40(int a0, int a1);

void func_0B82F8(void)
{
    unsigned int status;

    status = 0;
    if (D_001605D4 == 1) {
        func_0C5490(1, D_001605CC, D_001605D0, 0);
        status = func_0C4F98();
    }
    if (status == 1 || func_0C4FA8() == 0) {
        func_0A4570(0);
        func_0C5270(0);
        func_016E40(4, 0);
    }
}
