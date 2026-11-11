/* LEVEL_15:0x02D0D0 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_001AFE00[];
extern char D_0017D2C0[];
extern int D_00149270;
extern int D_00149274;
extern int D_00149278;
extern void func_02D030(char *obj);
extern void func_057428(void);
extern void func_044E78(void);
extern int func_0D30F0(unsigned int value);
extern void func_0D4010(unsigned int value);
extern void func_02CC78(void);

void func_02D0D0(void)
{
    func_02D030(D_0017D2C0);
    func_057428();
    func_044E78();
    D_00149274 = func_0D30F0(((unsigned int)D_001AFE00[27] << 16) | 0xA00010C1u);
    D_00149278 = func_0D30F0(((unsigned int)D_001AFE00[11] << 16) | 0xA00010C1u);
    D_00149270 = ((int (*)(unsigned int))func_0D4010)(((unsigned int)D_001AFE00[48] << 16) | 0xA0001041u);
    func_02CC78();
}
