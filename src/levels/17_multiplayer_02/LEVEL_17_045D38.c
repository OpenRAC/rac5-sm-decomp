extern int func_045B68(void *);
extern void func_020EC0(void *, int);
extern void func_044270(void *);

int func_045D38(char *record)
{
    char *state = record + 0xc0;
    if (*(float *)(record + 300) == 0.0f)
        return 0;
    if (*(int *)(record + 0x168) != 1) {
        if (*(int *)(record + 0x168) != 2)
            return 0;
        if (func_045B68(record + 300) == 0)
            return 0;
    }
    if ((*(unsigned int *)(state + 0x18) & 0x8000) != 0) {
        if ((*(unsigned long long *)(record + 0x960) &
             0x1200080000000000ULL) == 0) {
            func_020EC0(record, 1);
            *(short *)(record + 0x102) = 0x10;
            func_044270(record);
            return 1;
        }
    }
    return 0;
}
