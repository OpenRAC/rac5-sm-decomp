extern int func_023E00(void *, void *, unsigned int, void *);

int func_023E98(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_023E00(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
