/* LEVEL_03:0x1E02E0 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1DFEF8(void);
extern int func_1DF900(void);
extern int func_1E00F0(void);

int func_1E02E0(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1DFEF8();
    case 1:
        return func_1DF900();
    case 2:
    case 3:
    case 4:
        return func_1E00F0();
    }
    return 0;
}
