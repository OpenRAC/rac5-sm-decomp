/* LEVEL_19:0x19A930 -- placement copy of LEVEL_01_1EDCC8.c: placement copy of LEVEL_01_1EDCC8.c: compares two string handles: equal when they are the same handle or their strings are equal. */
extern int strcmp(const char *a, const char *b);

int __eq__C9type_infoRC9type_info(char **a, char **b)
{
    int equal = 0;

    if (b == a || strcmp(*a, *b) == 0) {
        equal = 1;
    }
    return equal;
}
