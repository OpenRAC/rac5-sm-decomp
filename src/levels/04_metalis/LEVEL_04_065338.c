/* LEVEL_04:0x065338 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00253988;
extern void func_06C600(void *);
extern void func_065680(void *);

void func_065338(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00253988 = 8;
    } else if (state == 12) {
        func_06C600(record);
    } else {
        D_00253988 = 7;
    }
    func_065680(record);
}
