/* LEVEL_16:0x0B9188 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001AF0FC;
extern int D_001AF0F8;
extern int D_001AF0F4;
extern void func_0C6648(int a0, int a1, int a2, int a3);
extern unsigned int func_0C6150(void);
extern unsigned int func_0C6160(void);
extern int func_0A50B0(int index);
extern void func_0C6428(int a0);
extern void func_018B98(int a0, int a1);

void func_0B9188(void)
{
    unsigned int status;

    status = 0;
    if (D_001AF0FC == 1) {
        func_0C6648(1, D_001AF0F4, D_001AF0F8, 0);
        status = func_0C6150();
    }
    if (status == 1 || func_0C6160() == 0) {
        func_0A50B0(0);
        func_0C6428(0);
        func_018B98(4, 0);
    }
}
