/* LEVEL_07:0x15BBC0 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_0021B778[];
extern void func_1DCE78(char *a0, int a1, char *a2, float f12);

void func_15BBC0(char *item)
{
    func_1DCE78(item, *(int *)(item + 0x58), D_0021B778, 1.0f);
}
