/* LEVEL_09:0x0604D0 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_002208F8;
extern void func_067798(void *);
extern void func_060818(void *);

void func_0604D0(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_002208F8 = 8;
    } else if (state == 12) {
        func_067798(record);
    } else {
        D_002208F8 = 7;
    }
    func_060818(record);
}
