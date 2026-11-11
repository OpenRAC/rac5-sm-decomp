/* LEVEL_24:0x05CF20 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00205078;
extern void func_0641E8(void *);
extern void func_05D268(void *);

void func_05CF20(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00205078 = 8;
    } else if (state == 12) {
        func_0641E8(record);
    } else {
        D_00205078 = 7;
    }
    func_05D268(record);
}
