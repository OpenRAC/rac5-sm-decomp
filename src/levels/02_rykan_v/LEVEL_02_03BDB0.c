/* LEVEL_02:0x03BDB0 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_03BCB8(char *, char *);
extern void func_03BD60(char *, char *, int);

void func_03BDB0(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_03BCB8(first, middle);
        func_03BD60(middle, last, 0);
    } else {
        func_03BCB8(first, last);
    }
}
