/* LEVEL_02:0x15BFA8 -- placement copy of LEVEL_01_155718.c: runs func_15B458, then func_087518 with 0 and the address of the handler at 0x1556F8. */
extern void func_15B458(void);
extern void func_087518(int first, int second);
extern void func_15BF88(void);

void func_15BFA8(void)
{
    func_15B458();
    func_087518(0, (int)func_15BF88);
}
