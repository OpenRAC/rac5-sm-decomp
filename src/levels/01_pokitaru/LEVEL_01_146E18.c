/* LEVEL_01:0x146E18 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_0021C980[];
extern void func_1CFF28(char *a0, int a1, char *a2, float f12);

void func_146E18(char *item)
{
    func_1CFF28(item, *(int *)(item + 0x58), D_0021C980, 1.0f);
}
