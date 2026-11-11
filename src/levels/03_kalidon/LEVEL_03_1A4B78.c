/* LEVEL_03:0x1A4B78 -- runs the shared handler with mode 9 and reports state 3. */
extern void func_1A4B98(void *o, int mode);

int func_1A4B78(void *o)
{
    func_1A4B98(o, 9);
    return 3;
}
