/* LEVEL_19:0x055740 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_001EB9C8;
extern void func_05CAB8(void *);
extern void func_055A58(void *);

void func_055740(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_001EB9C8 = 8;
    } else if (state == 12) {
        func_05CAB8(record);
    } else {
        D_001EB9C8 = 7;
    }
    func_055A58(record);
}
