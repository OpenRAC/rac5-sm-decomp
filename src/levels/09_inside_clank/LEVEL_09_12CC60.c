/* LEVEL_09:0x12CC60 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001F0B88;
extern int D_001F0B80;
extern int func_12CF08(void);
extern int func_12CA30(int value);

int func_12CC60(void)
{
    if (D_001F0B88 != 0) {
        func_12CF08();
        D_001F0B80 = 2;
        func_12CA30(1);
        return 1;
    }
    return 0;
}
