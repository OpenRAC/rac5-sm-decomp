/* LEVEL_06:0x0343E8 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_00284B40[];
extern char D_00221EC0[];
extern int D_001E34F0;
extern int D_001E34F4;
extern int D_001E34F8;
extern void func_034348(char *obj);
extern void func_0630B0(void);
extern void func_050498(void);
extern int func_102E78(unsigned int value);
extern void func_103D98(unsigned int value);
extern void func_033F90(void);

void func_0343E8(void)
{
    func_034348(D_00221EC0);
    func_0630B0();
    func_050498();
    D_001E34F4 = func_102E78(((unsigned int)D_00284B40[27] << 16) | 0xA00010C1u);
    D_001E34F8 = func_102E78(((unsigned int)D_00284B40[11] << 16) | 0xA00010C1u);
    D_001E34F0 = ((int (*)(unsigned int))func_103D98)(((unsigned int)D_00284B40[48] << 16) | 0xA0001041u);
    func_033F90();
}
