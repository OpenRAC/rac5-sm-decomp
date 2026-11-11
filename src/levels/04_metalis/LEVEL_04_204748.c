/* LEVEL_04:0x204748 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_00223300)(void);
extern void func_204770(void);

void func_204748(void)
{
    void (*fn)(void);

    fn = func_204770;
    D_00223300 = fn;
    fn();
}
