extern int func_023AA0(void *, void *, unsigned int, void *);

int func_023B38(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_023AA0(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
