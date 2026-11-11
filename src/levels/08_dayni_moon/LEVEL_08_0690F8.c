/* LEVEL_08:0x0690F8 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_00288408;
extern void func_0703E0(void *);
extern void func_069440(void *);

void func_0690F8(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00288408 = 8;
    } else if (state == 12) {
        func_0703E0(record);
    } else {
        D_00288408 = 7;
    }
    func_069440(record);
}
