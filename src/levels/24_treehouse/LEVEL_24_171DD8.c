/* LEVEL_24:0x171DD8 -- runs the two-step reset: index 0x17 first, then index 0. */
extern void func_0E7358(int index);

void func_171DD8(void)
{
    func_0E7358(0x17);
    func_0E7358(0);
}
