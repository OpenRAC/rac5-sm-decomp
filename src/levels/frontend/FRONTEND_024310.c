/* FRONTEND:0x024310 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_0010554C)(void);
extern void func_024338(void);

void func_024310(void)
{
    void (*fn)(void);

    fn = func_024338;
    D_0010554C = fn;
    fn();
}
