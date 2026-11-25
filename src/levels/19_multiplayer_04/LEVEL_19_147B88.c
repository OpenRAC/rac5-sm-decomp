/* LEVEL_19:0x147B88 -- placement copy of LEVEL_16_14D820.c: refreshes the object's table and records the start and end of its entry array. */
extern void func_066B08(void);
extern int D_001BEB44;
extern int D_001BEB48;

void func_147B88(char *object)
{
    func_066B08();
    D_001BEB44 = *(int *)(object + 0xC);
    D_001BEB48 = *(int *)(object + 0xC) + *(int *)(object + 0x30) * 0x80;
}
