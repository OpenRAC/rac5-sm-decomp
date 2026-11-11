/* LEVEL_18:0x117F28 -- placement copy of LEVEL_16_118F38.c: with a zero argument, reports whether the global mode
   is one of 0 to 5. */
extern int D_001B9994;

int func_117F28(int arg)
{
    int result = 0;
    int mode;

    if (arg == 0) {
        mode = D_001B9994;
        if (mode == 0 || mode == 2 || mode == 1 || mode == 3 || mode == 4
            || mode == 5)
            result = 1;
    }
    return result;
}
