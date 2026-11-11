/* LEVEL_06:0x16EE18 -- resets slot 0 and stores the handle returned for a fixed hash into a global. */
extern int D_001F68AC;
extern void func_0E8808(int index);
extern int func_1206C0(unsigned int value);

void func_16EE18(void)
{
    func_0E8808(0);
    D_001F68AC = func_1206C0(0xE5BB22E4u);
}
