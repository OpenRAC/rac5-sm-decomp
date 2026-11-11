/* LEVEL_16:0x0562E0 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_001EB848;
extern void func_05D658(void *);
extern void func_0565F8(void *);

void func_0562E0(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_001EB848 = 8;
    } else if (state == 12) {
        func_05D658(record);
    } else {
        D_001EB848 = 7;
    }
    func_0565F8(record);
}
