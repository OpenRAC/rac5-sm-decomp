/* LEVEL_03:0x13C810 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00234718[];
extern void func_1E06C0(char *a0, int a1, char *a2, float f12);

void func_13C810(char *item)
{
    func_1E06C0(item, *(int *)(item + 0x58), D_00234718, 1.0f);
}
