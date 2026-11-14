/* LEVEL_08:0x025798 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_00264470;

extern int func_027D88(void *value);
extern void func_025A80(long long value, int state);
extern void func_027E10(int index);

int func_025798(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_027D88((void *)index);
            func_025A80(index, D_00264470);
        } else {
            func_027E10(index);
        }
        return 1;
    }
    return 0;
}
