extern int func_024470(void *, void *, unsigned int, void *);

int func_024508(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_024470(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
