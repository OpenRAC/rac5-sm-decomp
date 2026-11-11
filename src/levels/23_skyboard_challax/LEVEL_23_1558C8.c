/* LEVEL_23:0x1558C8 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001DAC18[];
extern void func_1A18C0(char *a0, int a1, char *a2, float f12);

void func_1558C8(char *item)
{
    func_1A18C0(item, *(int *)(item + 0x58), D_001DAC18, 1.0f);
}
