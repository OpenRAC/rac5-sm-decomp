/* LEVEL_07:0x14A140 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00231820[];
extern void func_1DCE78(char *a0, int a1, char *a2, float f12);

void func_14A140(char *item)
{
    func_1DCE78(item, *(int *)(item + 0x58), D_00231820, 1.0f);
}
