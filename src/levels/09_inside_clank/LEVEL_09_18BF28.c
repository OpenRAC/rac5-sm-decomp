/* LEVEL_09:0x18BF28 -- caches the keyed lookup 0x95AEB7FA in a global. */
extern int D_001F272C;
extern int func_123000(unsigned int key);

void func_18BF28(void)
{
    D_001F272C = func_123000(0x95AEB7FAu);
}
