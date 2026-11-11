/* LEVEL_24:0x030A90 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_00263C80[];
extern char D_00201040[];
extern int D_001C5270;
extern int D_001C5274;
extern int D_001C5278;
extern void func_0309F0(char *obj);
extern void func_05F940(void);
extern void func_04CD28(void);
extern int func_1019C8(unsigned int value);
extern void func_1028E8(unsigned int value);
extern void func_030638(void);

void func_030A90(void)
{
    func_0309F0(D_00201040);
    func_05F940();
    func_04CD28();
    D_001C5274 = func_1019C8(((unsigned int)D_00263C80[27] << 16) | 0xA00010C1u);
    D_001C5278 = func_1019C8(((unsigned int)D_00263C80[11] << 16) | 0xA00010C1u);
    D_001C5270 = ((int (*)(unsigned int))func_1028E8)(((unsigned int)D_00263C80[48] << 16) | 0xA0001041u);
    func_030638();
}
