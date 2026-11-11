/* LEVEL_04:0x1684C0 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00220BE8[];
extern void func_1E6448(char *a0, int a1, char *a2, float f12);

void func_1684C0(char *item)
{
    func_1E6448(item, *(int *)(item + 0x58), D_00220BE8, 1.0f);
}
