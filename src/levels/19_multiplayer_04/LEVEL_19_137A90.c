/* LEVEL_19:0x137A90 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_001BE888[];
extern void func_185378(char *a0, int a1, char *a2, float f12);

void func_137A90(char *item)
{
    func_185378(item, *(int *)(item + 0x58), D_001BE888, 1.0f);
}
