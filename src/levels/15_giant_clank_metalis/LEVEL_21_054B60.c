/* LEVEL_21:0x054B60 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_001812A8;
extern void func_05BCD0(void *);
extern void func_054EA8(void *);

void func_054B60(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_001812A8 = 8;
    } else if (state == 12) {
        func_05BCD0(record);
    } else {
        D_001812A8 = 7;
    }
    func_054EA8(record);
}
