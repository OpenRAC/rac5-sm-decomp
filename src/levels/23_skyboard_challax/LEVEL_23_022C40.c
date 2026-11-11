extern int func_022BA8(void *, void *, unsigned int, void *);

int func_022C40(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_022BA8(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
