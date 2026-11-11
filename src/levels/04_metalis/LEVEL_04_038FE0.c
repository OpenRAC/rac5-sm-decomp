/* LEVEL_04:0x038FE0 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_002B25C0[];
extern char D_0024F950[];
extern int D_0020DAB0;
extern int D_0020DAB4;
extern int D_0020DAB8;
extern void func_038F40(char *obj);
extern void func_067D58(void);
extern void func_0555A8(void);
extern int func_115EF0(unsigned int value);
extern void func_116E10(unsigned int value);
extern void func_038B88(void);

void func_038FE0(void)
{
    func_038F40(D_0024F950);
    func_067D58();
    func_0555A8();
    D_0020DAB4 = func_115EF0(((unsigned int)D_002B25C0[27] << 16) | 0xA00010C1u);
    D_0020DAB8 = func_115EF0(((unsigned int)D_002B25C0[11] << 16) | 0xA00010C1u);
    D_0020DAB0 = ((int (*)(unsigned int))func_116E10)(((unsigned int)D_002B25C0[48] << 16) | 0xA0001041u);
    func_038B88();
}
