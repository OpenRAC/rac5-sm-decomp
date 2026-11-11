/* LEVEL_17:0x055D10 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_001DCB48;
extern void func_05D088(void *);
extern void func_056028(void *);

void func_055D10(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_001DCB48 = 8;
    } else if (state == 12) {
        func_05D088(record);
    } else {
        D_001DCB48 = 7;
    }
    func_056028(record);
}
