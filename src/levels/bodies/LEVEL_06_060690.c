/* LEVEL_06:0x060690 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00225EF8;
extern void func_067958(void *);
extern void func_0609D8(void *);

void func_060690(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00225EF8 = 8;
    } else if (state == 12) {
        func_067958(record);
    } else {
        D_00225EF8 = 7;
    }
    func_0609D8(record);
}
