extern int func_024B08(void *, void *, unsigned int, void *);

int func_024BA0(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_024B08(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
