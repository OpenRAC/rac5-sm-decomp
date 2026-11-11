/* LEVEL_18:0x054DE8 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_001EBBC8;
extern void func_05C160(void *);
extern void func_055100(void *);

void func_054DE8(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_001EBBC8 = 8;
    } else if (state == 12) {
        func_05C160(record);
    } else {
        D_001EBBC8 = 7;
    }
    func_055100(record);
}
