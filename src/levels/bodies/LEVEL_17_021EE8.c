extern int func_021E50(void *, void *, unsigned int, void *);

int func_021EE8(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_021E50(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
