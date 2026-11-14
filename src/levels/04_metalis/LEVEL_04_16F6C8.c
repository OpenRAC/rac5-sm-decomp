/* LEVEL_04:0x16F6C8 -- looks up the global sound and keeps its handle. */
extern int D_00220DA0;
extern int GLOBALWAD_FindGlobalSound(unsigned int id) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_16F6C8(void)
{
    D_00220DA0 = GLOBALWAD_FindGlobalSound(0xBD506DCCu);
}
