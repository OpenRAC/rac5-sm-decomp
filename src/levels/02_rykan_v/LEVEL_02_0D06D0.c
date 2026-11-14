/* LEVEL_02:0x0D06D0 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_00216214;
extern int D_00216210;
extern int D_0021620C;
extern void func_0DD8E0(int a0, int a1, int a2, int a3);
extern unsigned int func_0DD3E8(void);
extern unsigned int func_0DD3F8(void);
extern int func_0BC930(int index);
extern void func_0DD6C0(int a0);
extern void func_01B188(int a0, int a1);

void func_0D06D0(void)
{
    unsigned int status;

    status = 0;
    if (D_00216214 == 1) {
        func_0DD8E0(1, D_0021620C, D_00216210, 0);
        status = func_0DD3E8();
    }
    if (status == 1 || func_0DD3F8() == 0) {
        func_0BC930(0);
        func_0DD6C0(0);
        func_01B188(4, 0);
    }
}
