extern int func_025468(void *, void *, unsigned int, void *);

int func_025500(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_025468(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
