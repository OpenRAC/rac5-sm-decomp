extern int func_01F1D0(void *, void *, unsigned int, void *);

int func_01F268(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_01F1D0(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
