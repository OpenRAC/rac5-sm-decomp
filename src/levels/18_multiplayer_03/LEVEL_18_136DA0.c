/* LEVEL_18:0x136DA0 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001BEBA0[];
extern void func_189A80(char *a0, int a1, char *a2, float f12);

void func_136DA0(char *item)
{
    func_189A80(item, *(int *)(item + 0x58), D_001BEBA0, 1.0f);
}
