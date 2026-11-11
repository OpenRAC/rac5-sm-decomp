/* LEVEL_04:0x14A810 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_002351A8[];
extern void func_1E6448(char *a0, int a1, char *a2, float f12);

void func_14A810(char *item)
{
    func_1E6448(item, *(int *)(item + 0x58), D_002351A8, 1.0f);
}
