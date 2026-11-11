extern int func_022110(void *, void *, unsigned int, void *);

int func_0221A8(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_022110(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
