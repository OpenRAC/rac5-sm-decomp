/* LEVEL_07:0x0645D8 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_0024EA78;
extern void func_06B8A0(void *);
extern void func_064920(void *);

void func_0645D8(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_0024EA78 = 8;
    } else if (state == 12) {
        func_06B8A0(record);
    } else {
        D_0024EA78 = 7;
    }
    func_064920(record);
}
