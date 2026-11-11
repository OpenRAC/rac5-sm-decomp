/* LEVEL_19:0x1981F0 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001BFC58)(void);
extern void func_198218(void);

void func_1981F0(void)
{
    void (*fn)(void);

    fn = func_198218;
    D_001BFC58 = fn;
    fn();
}
