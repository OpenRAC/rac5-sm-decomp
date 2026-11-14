/* LEVEL_07:0x0254E0 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_0022F4F0;

extern int func_027AC0(void *value);
extern void func_0257C8(long long value, int state);
extern void func_027B48(int index);

int func_0254E0(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_027AC0((void *)index);
            func_0257C8(index, D_0022F4F0);
        } else {
            func_027B48(index);
        }
        return 1;
    }
    return 0;
}
