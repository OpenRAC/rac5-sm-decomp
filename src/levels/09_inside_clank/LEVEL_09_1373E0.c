/* LEVEL_09:0x1373E0 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_00205338[];
extern void func_1B6E28(char *a0, int a1, char *a2, float f12);

void func_1373E0(char *item)
{
    func_1B6E28(item, *(int *)(item + 0x58), D_00205338, 1.0f);
}
