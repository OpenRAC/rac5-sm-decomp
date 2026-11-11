/* LEVEL_10:0x036348 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_002A11C0[];
extern char D_0023E540[];
extern int D_001FD5F0;
extern int D_001FD5F4;
extern int D_001FD5F8;
extern void func_0362A8(char *obj);
extern void func_065120(void);
extern void func_0524A0(void);
extern int func_10AAC0(unsigned int value);
extern void func_10B9E0(unsigned int value);
extern void func_035EF0(void);

void func_036348(void)
{
    func_0362A8(D_0023E540);
    func_065120();
    func_0524A0();
    D_001FD5F4 = func_10AAC0(((unsigned int)D_002A11C0[27] << 16) | 0xA00010C1u);
    D_001FD5F8 = func_10AAC0(((unsigned int)D_002A11C0[11] << 16) | 0xA00010C1u);
    D_001FD5F0 = ((int (*)(unsigned int))func_10B9E0)(((unsigned int)D_002A11C0[48] << 16) | 0xA0001041u);
    func_035EF0();
}
