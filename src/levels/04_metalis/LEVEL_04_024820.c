extern int func_024788(void *, void *, unsigned int, void *);

int func_024820(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_024788(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
