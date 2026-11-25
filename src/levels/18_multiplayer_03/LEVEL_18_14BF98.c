/* LEVEL_18:0x14BF98 -- placement copy of LEVEL_16_14D820.c: refreshes the object's table and records the start and end of its entry array. */
extern void func_066168(void);
extern int D_001BEEBC;
extern int D_001BEEC0;

void func_14BF98(char *object)
{
    func_066168();
    D_001BEEBC = *(int *)(object + 0xC);
    D_001BEEC0 = *(int *)(object + 0xC) + *(int *)(object + 0x30) * 0x80;
}
