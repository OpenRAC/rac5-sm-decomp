/* LEVEL_05:0x152E18 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001F64D0[];
extern void func_1BEBB8(char *a0, int a1, char *a2, float f12);

void func_152E18(char *item)
{
    func_1BEBB8(item, *(int *)(item + 0x58), D_001F64D0, 1.0f);
}
