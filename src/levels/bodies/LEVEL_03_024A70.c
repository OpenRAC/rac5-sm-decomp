extern int func_0249D8(void *, void *, unsigned int, void *);

int func_024A70(void *first, void *second, void *third)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (func_0249D8(first, second, i, third)) {
            return 1;
        }
    }
    return 0;
}
