/* LEVEL_23:0x12FB48 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001EE7A8[];
extern void func_1A18C0(char *a0, int a1, char *a2, float f12);

void func_12FB48(char *item)
{
    func_1A18C0(item, *(int *)(item + 0x58), D_001EE7A8, 1.0f);
}
