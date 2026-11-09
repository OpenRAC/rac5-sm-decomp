/* LEVEL_03:0x0355A8 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_0354B0(char *, char *);
extern void func_035558(char *, char *, int);

void func_0355A8(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_0354B0(first, middle);
        func_035558(middle, last, 0);
    } else {
        func_0354B0(first, last);
    }
}
