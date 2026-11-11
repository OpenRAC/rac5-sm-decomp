extern int func_025388(void *, void *, unsigned int, void *);

int func_025420(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_025388(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
