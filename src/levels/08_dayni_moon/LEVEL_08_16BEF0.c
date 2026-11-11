/* LEVEL_08:0x16BEF0 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00268538[];
extern void func_20E018(char *a0, int a1, char *a2, float f12);

void func_16BEF0(char *item)
{
    func_20E018(item, *(int *)(item + 0x58), D_00268538, 1.0f);
}
