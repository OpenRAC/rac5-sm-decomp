/* LEVEL_09:0x17E5B0 -- caches the keyed lookup 0xFB00F761 in a global. */
extern int D_001F2478;
extern int func_123000(unsigned int key);

void func_17E5B0(void)
{
    D_001F2478 = func_123000(0xFB00F761u);
}
