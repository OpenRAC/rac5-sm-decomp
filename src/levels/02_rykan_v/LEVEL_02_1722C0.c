/* LEVEL_02:0x1722C0 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_0021C5D8[];
extern void func_1E4BC0(char *a0, int a1, char *a2, float f12);

void func_1722C0(char *item)
{
    func_1E4BC0(item, *(int *)(item + 0x58), D_0021C5D8, 1.0f);
}
