/* LEVEL_22:0x01FD50 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_00177C70;

extern int func_0220F0(void *value);
extern void func_01FFE0(long long value, int state);
extern int func_022178(int index);

int func_01FD50(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_0220F0((void *)index);
            func_01FFE0(index, D_00177C70);
        } else {
            func_022178(index);
        }
        return 1;
    }
    return 0;
}
