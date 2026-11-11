extern int func_023210(void *, void *, unsigned int, void *);

int func_0232A8(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_023210(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
