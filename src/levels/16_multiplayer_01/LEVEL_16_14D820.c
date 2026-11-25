/* LEVEL_16:0x14D820 -- refreshes the object's table and records the start and end of its entry array. */
extern void func_066918(void);
extern int D_001BD9FC;
extern int D_001BDA00;

void func_14D820(char *object)
{
    func_066918();
    D_001BD9FC = *(int *)(object + 0xC);
    D_001BDA00 = *(int *)(object + 0xC) + *(int *)(object + 0x30) * 0x80;
}
