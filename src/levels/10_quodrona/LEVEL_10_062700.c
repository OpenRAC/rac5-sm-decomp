/* LEVEL_10:0x062700 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00242578;
extern void func_0699C8(void *);
extern void func_062A48(void *);

void func_062700(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00242578 = 8;
    } else if (state == 12) {
        func_0699C8(record);
    } else {
        D_00242578 = 7;
    }
    func_062A48(record);
}
