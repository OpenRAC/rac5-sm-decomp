/* LEVEL_24:0x022CF0 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_001EB570;

extern int func_025090(void *value);
extern void func_022F80(long long value, int state);
extern int func_025118(int index);

int func_022CF0(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_025090((void *)index);
            func_022F80(index, D_001EB570);
        } else {
            func_025118(index);
        }
        return 1;
    }
    return 0;
}
