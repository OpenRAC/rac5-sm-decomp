/* LEVEL_24:0x1BC260 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001DA830)(void);
extern void func_1BC288(void);

void func_1BC260(void)
{
    void (*fn)(void);

    fn = func_1BC288;
    D_001DA830 = fn;
    fn();
}
