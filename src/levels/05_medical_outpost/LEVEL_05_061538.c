/* LEVEL_05:0x061538 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00224E78;
extern void func_068800(void *);
extern void func_061880(void *);

void func_061538(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00224E78 = 8;
    } else if (state == 12) {
        func_068800(record);
    } else {
        D_00224E78 = 7;
    }
    func_061880(record);
}
