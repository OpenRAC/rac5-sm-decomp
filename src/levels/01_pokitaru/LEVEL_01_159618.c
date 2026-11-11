/* LEVEL_01:0x159618 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00207478[];
extern void func_1CFF28(char *a0, int a1, char *a2, float f12);

void func_159618(char *item)
{
    func_1CFF28(item, *(int *)(item + 0x58), D_00207478, 1.0f);
}
