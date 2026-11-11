/* LEVEL_02:0x14D690 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00231C50[];
extern void func_1E4BC0(char *a0, int a1, char *a2, float f12);

void func_14D690(char *item)
{
    func_1E4BC0(item, *(int *)(item + 0x58), D_00231C50, 1.0f);
}
