/* LEVEL_19:0x032870 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_032778(char *, char *);
extern void func_032820(char *, char *, int);

void func_032870(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_032778(first, middle);
        func_032820(middle, last, 0);
    } else {
        func_032778(first, last);
    }
}
