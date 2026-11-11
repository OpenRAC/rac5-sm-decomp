/* LEVEL_17:0x12B550 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001C44F0[];
extern void func_17BC28(char *a0, int a1, char *a2, float f12);

void func_12B550(char *item)
{
    func_17BC28(item, *(int *)(item + 0x58), D_001C44F0, 1.0f);
}
