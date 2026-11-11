/* LEVEL_23:0x04D808 -- placement copy of LEVEL_01_0544E0.c: kind 9 calls a helper; other kinds store 7 or 8 at +0xC6C. */
extern void func_064350(void *o);

void func_04D808(char *record)
{
    int kind = *(unsigned short *)(record + 0x108);
    unsigned long d;
    if (kind == 9) {
        func_064350(record);
    } else {
        d = (kind - 2) & 0xFFFF;
        if (d < 2)
            *(int *)(record + 0xc6c) = 8;
        else
            *(int *)(record + 0xc6c) = 7;
    }
}