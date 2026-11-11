/* LEVEL_07:0x037EC8 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_002AD6C0[];
extern char D_0024AA40[];
extern int D_002088F0;
extern int D_002088F4;
extern int D_002088F8;
extern void func_037E28(char *obj);
extern void func_066FF8(void);
extern void func_0543C8(void);
extern int func_10D2F0(unsigned int value);
extern void func_10E8F8(unsigned int value);
extern void func_037A70(void);

void func_037EC8(void)
{
    func_037E28(D_0024AA40);
    func_066FF8();
    func_0543C8();
    D_002088F4 = func_10D2F0(((unsigned int)D_002AD6C0[27] << 16) | 0xA00010C1u);
    D_002088F8 = func_10D2F0(((unsigned int)D_002AD6C0[11] << 16) | 0xA00010C1u);
    D_002088F0 = ((int (*)(unsigned int))func_10E8F8)(((unsigned int)D_002AD6C0[48] << 16) | 0xA0001041u);
    func_037A70();
}
