/* LEVEL_01:0x037998 -- runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_00297DC0[];
extern char D_00235140[];
extern int D_001F45F0;
extern int D_001F45F4;
extern int D_001F45F8;
extern void func_0378F8(char *obj);
extern void func_0662F0(void);
extern void func_053BE8(void);
extern int func_109DB8(unsigned int value);
extern void func_10B8A8(unsigned int value);
extern void func_037540(void);

void func_037998(void)
{
    func_0378F8(D_00235140);
    func_0662F0();
    func_053BE8();
    D_001F45F4 = func_109DB8(((unsigned int)D_00297DC0[27] << 16) | 0xA00010C1u);
    D_001F45F8 = func_109DB8(((unsigned int)D_00297DC0[11] << 16) | 0xA00010C1u);
    D_001F45F0 = ((int (*)(unsigned int))func_10B8A8)(((unsigned int)D_00297DC0[48] << 16) | 0xA0001041u);
    func_037540();
}
