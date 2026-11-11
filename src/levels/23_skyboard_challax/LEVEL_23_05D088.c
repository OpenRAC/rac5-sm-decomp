/* LEVEL_23:0x05D088 -- placement copy of LEVEL_01_0638D0.c: dispatches on a 16-bit state field of a record. */
extern int D_002065F8;
extern void func_064350(void *);
extern void func_05D3D0(void *);

void func_05D088(char *record)
{
    int state = *(unsigned short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_002065F8 = 8;
    } else if (state == 12) {
        func_064350(record);
    } else {
        D_002065F8 = 7;
    }
    func_05D3D0(record);
}
