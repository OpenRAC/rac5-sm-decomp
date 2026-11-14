/* LEVEL_24:0x14BC68 -- placement copy of LEVEL_01_155718.c: runs func_14B130, then func_07B378 with 0 and the address of the handler at 0x1556F8. */
extern void func_14B130(void);
extern void func_07B378(int first, int second);
extern void func_14BC48(void);

void func_14BC68(void)
{
    func_14B130();
    func_07B378(0, (int)func_14BC48);
}
