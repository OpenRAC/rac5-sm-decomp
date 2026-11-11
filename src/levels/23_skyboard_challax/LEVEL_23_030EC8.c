/* LEVEL_23:0x030EC8 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_00269200[];
extern char D_002025C0[];
extern int D_001C79F0;
extern int D_001C79F4;
extern int D_001C79F8;
extern void func_030E28(char *obj);
extern void func_05FAA8(void);
extern void func_04CF10(void);
extern int func_0FCCA0(unsigned int value);
extern void func_0FE110(unsigned int value);
extern void func_030A70(void);

void func_030EC8(void)
{
    func_030E28(D_002025C0);
    func_05FAA8();
    func_04CF10();
    D_001C79F4 = func_0FCCA0(((unsigned int)D_00269200[27] << 16) | 0xA00010C1u);
    D_001C79F8 = func_0FCCA0(((unsigned int)D_00269200[11] << 16) | 0xA00010C1u);
    D_001C79F0 = ((int (*)(unsigned int))func_0FE110)(((unsigned int)D_00269200[48] << 16) | 0xA0001041u);
    func_030A70();
}
