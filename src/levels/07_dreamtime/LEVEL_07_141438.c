/* LEVEL_07:0x141438 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00230518[];
extern void func_1DCE78(char *a0, int a1, char *a2, float f12);

void func_141438(char *item)
{
    func_1DCE78(item, *(int *)(item + 0x58), D_00230518, 1.0f);
}
