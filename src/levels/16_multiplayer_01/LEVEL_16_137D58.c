/* LEVEL_16:0x137D58 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001BD720[];
extern void func_1885E0(char *a0, int a1, char *a2, float f12);

void func_137D58(char *item)
{
    func_1885E0(item, *(int *)(item + 0x58), D_001BD720, 1.0f);
}
