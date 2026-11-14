/* LEVEL_09:0x184880 -- looks up the handle of a fixed key and keeps it in a global. */
extern int D_001F255C;
extern int func_123000(unsigned int value);

void func_184880(void)
{
    D_001F255C = func_123000(0x5de87f0eu);
}
