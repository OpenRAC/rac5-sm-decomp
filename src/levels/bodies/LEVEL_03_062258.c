/* LEVEL_03:0x062258 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00253FF8;
extern void func_069520(void *);
extern void func_0625A0(void *);

void func_062258(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00253FF8 = 8;
    } else if (state == 12) {
        func_069520(record);
    } else {
        D_00253FF8 = 7;
    }
    func_0625A0(record);
}
