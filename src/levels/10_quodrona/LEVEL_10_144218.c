/* LEVEL_10:0x144218 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_002258F0[];
extern void func_1D42D0(char *a0, int a1, char *a2, float f12);

void func_144218(char *item)
{
    func_1D42D0(item, *(int *)(item + 0x58), D_002258F0, 1.0f);
}
