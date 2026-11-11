/* LEVEL_08:0x159298 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00266A70[];
extern void func_20E018(char *a0, int a1, char *a2, float f12);

void func_159298(char *item)
{
    func_20E018(item, *(int *)(item + 0x58), D_00266A70, 1.0f);
}
