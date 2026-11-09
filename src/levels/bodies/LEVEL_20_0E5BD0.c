/* LEVEL_20:0x0E5BD0 -- placement copy of LEVEL_16_113060.c: clears the global word and runs the six reset
   steps. */
extern int D_001172F4;
extern void func_0E6280(void);
extern void func_0E7870(void);
extern void func_0E8B80(void);
extern void func_0E94D8(void);
extern void func_01F9A8(void);
extern void func_026478(void);

void func_0E5BD0(void)
{
    D_001172F4 = 0;
    func_0E6280();
    func_0E7870();
    func_0E8B80();
    func_0E94D8();
    func_01F9A8();
    func_026478();
}
