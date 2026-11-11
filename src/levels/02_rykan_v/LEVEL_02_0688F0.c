/* LEVEL_02:0x0688F0 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00250688;
extern void func_06FC30(void *);
extern void func_068C90(void *);

void func_0688F0(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00250688 = 8;
    } else if (state == 12) {
        func_06FC30(record);
    } else {
        D_00250688 = 7;
    }
    func_068C90(record);
}
