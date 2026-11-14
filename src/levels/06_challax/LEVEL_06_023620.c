/* LEVEL_06:0x023620 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_00209670;

extern int func_025C10(void *value);
extern void func_023908(long long value, int state);
extern void func_025C98(int index);

int func_023620(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_025C10((void *)index);
            func_023908(index, D_00209670);
        } else {
            func_025C98(index);
        }
        return 1;
    }
    return 0;
}
