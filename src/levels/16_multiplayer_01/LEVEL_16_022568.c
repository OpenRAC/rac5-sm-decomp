extern int func_0224D0(void *, void *, unsigned int, void *);

int func_022568(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_0224D0(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
