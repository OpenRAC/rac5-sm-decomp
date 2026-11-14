/* LEVEL_08:0x17AA70 -- placement copy of LEVEL_04_16F6C8.c: looks up the global sound and keeps its handle. */
extern int D_00250888;
extern int GLOBALWAD_FindGlobalSound(unsigned int id) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_17AA70(void)
{
    D_00250888 = GLOBALWAD_FindGlobalSound(0xBD506DCCu);
}
