/* LEVEL_16:0x12BB00 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001D10F0[];
extern void func_1885E0(char *a0, int a1, char *a2, float f12);

void func_12BB00(char *item)
{
    func_1885E0(item, *(int *)(item + 0x58), D_001D10F0, 1.0f);
}
