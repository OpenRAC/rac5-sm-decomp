/* LEVEL_01:0x133CC8 -- when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_00207088;
extern int D_00207080;
extern int func_133F70(void);
extern int func_133A98(int value);

int func_133CC8(void)
{
    if (D_00207088 != 0) {
        func_133F70();
        D_00207080 = 2;
        func_133A98(1);
        return 1;
    }
    return 0;
}
