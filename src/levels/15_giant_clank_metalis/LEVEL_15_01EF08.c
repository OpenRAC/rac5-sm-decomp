extern int func_01EE70(void *, void *, unsigned int, void *);

int func_01EF08(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_01EE70(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
