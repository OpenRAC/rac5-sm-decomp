/* LEVEL_24:0x13CC38 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001ED6E0[];
extern void func_1A0428(char *a0, int a1, char *a2, float f12);

void func_13CC38(char *item)
{
    func_1A0428(item, *(int *)(item + 0x58), D_001ED6E0, 1.0f);
}
