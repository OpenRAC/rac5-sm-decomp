extern int func_0487B8(void *);
extern void func_0238F8(void *, int);
extern void func_047208(void *);

int func_048C58(char *record)
{
    char *state = record + 0xc0;
    if (*(float *)(record + 300) == 0.0f)
        return 0;
    if (*(int *)(record + 0x168) != 1) {
        if (*(int *)(record + 0x168) != 2)
            return 0;
        if (func_0487B8(record + 300) == 0)
            return 0;
    }
    if ((*(unsigned int *)(state + 0x18) & 0x8000) != 0) {
        if ((*(unsigned long long *)(record + 0x960) &
             0x1200080000000000ULL) == 0) {
            func_0238F8(record, 1);
            *(short *)(record + 0x102) = 0x10;
            func_047208(record);
            return 1;
        }
    }
    return 0;
}
