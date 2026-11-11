/* LEVEL_16:0x118F38 -- with a zero argument, reports whether the global mode
   is one of 0 to 5. */
extern int D_001B8514;

int func_118F38(int arg)
{
    int result = 0;
    int mode;

    if (arg == 0) {
        mode = D_001B8514;
        if (mode == 0 || mode == 2 || mode == 1 || mode == 3 || mode == 4
            || mode == 5)
            result = 1;
    }
    return result;
}
