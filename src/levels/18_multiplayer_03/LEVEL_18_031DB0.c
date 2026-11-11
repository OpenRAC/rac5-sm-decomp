/* LEVEL_18:0x031DB0 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_031CB8(char *, char *);
extern void func_031D60(char *, char *, int);

void func_031DB0(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_031CB8(first, middle);
        func_031D60(middle, last, 0);
    } else {
        func_031CB8(first, last);
    }
}
