/* LEVEL_01:0x1EB588 -- installs the update callback in its global slot and runs it once. */
extern void (*D_002099E8)(void);
extern void func_1EB5B0(void);

void func_1EB588(void)
{
    void (*fn)(void);

    fn = func_1EB5B0;
    D_002099E8 = fn;
    fn();
}
