/* LEVEL_20:0x04F908 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00143178;
extern void func_056C80(void *);
extern void func_04FC20(void *);

void func_04F908(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00143178 = 8;
    } else if (state == 12) {
        func_056C80(record);
    } else {
        D_00143178 = 7;
    }
    func_04FC20(record);
}
