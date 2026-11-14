/* LEVEL_15:0x01F280 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_0016EF70;

extern int func_021710(void *value);
extern void func_01F510(long long value, int state);
extern void func_021798(int index);

int func_01F280(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_021710((void *)index);
            func_01F510(index, D_0016EF70);
        } else {
            func_021798(index);
        }
        return 1;
    }
    return 0;
}
