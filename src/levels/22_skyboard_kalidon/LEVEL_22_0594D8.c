/* LEVEL_22:0x0594D8 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_0018AD78;
extern void func_0607A0(void *);
extern void func_059820(void *);

void func_0594D8(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_0018AD78 = 8;
    } else if (state == 12) {
        func_0607A0(record);
    } else {
        D_0018AD78 = 7;
    }
    func_059820(record);
}
