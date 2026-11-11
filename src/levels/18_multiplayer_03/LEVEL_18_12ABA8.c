/* LEVEL_18:0x12ABA8 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001D2640[];
extern void func_189A80(char *a0, int a1, char *a2, float f12);

void func_12ABA8(char *item)
{
    func_189A80(item, *(int *)(item + 0x58), D_001D2640, 1.0f);
}
