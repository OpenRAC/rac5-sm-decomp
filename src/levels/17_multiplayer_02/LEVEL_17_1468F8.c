/* LEVEL_17:0x1468F8 -- placement copy of LEVEL_16_14D820.c: refreshes the object's table and records the start and end of its entry array. */
extern void func_0670D8(void);
extern int D_001B0FBC;
extern int D_001B0FC0;

void func_1468F8(char *object)
{
    func_0670D8();
    D_001B0FBC = *(int *)(object + 0xC);
    D_001B0FC0 = *(int *)(object + 0xC) + *(int *)(object + 0x30) * 0x80;
}
