extern int func_021B18(void *, void *, unsigned int, void *);

int func_021BB0(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_021B18(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
