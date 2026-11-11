/* LEVEL_17:0x1188B0 -- placement copy of LEVEL_16_118F38.c: with a zero argument, reports whether the global mode
   is one of 0 to 5. */
extern int D_001ABB0C;

int func_1188B0(int arg)
{
    int result = 0;
    int mode;

    if (arg == 0) {
        mode = D_001ABB0C;
        if (mode == 0 || mode == 2 || mode == 1 || mode == 3 || mode == 4
            || mode == 5)
            result = 1;
    }
    return result;
}
