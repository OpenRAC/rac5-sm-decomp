/* LEVEL_02:0x1716F8 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00235778[];
extern void func_1E4BC0(char *a0, int a1, char *a2, float f12);

void func_1716F8(char *item)
{
    func_1E4BC0(item, *(int *)(item + 0x58), D_00235778, 1.0f);
}
