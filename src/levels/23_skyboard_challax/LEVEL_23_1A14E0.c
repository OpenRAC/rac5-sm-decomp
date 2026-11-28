/* LEVEL_23:0x1A14E0 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1A10F8(void);
extern int func_1A0B00(void);
extern int func_1A12F0(void);

int func_1A14E0(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1A10F8();
    case 1:
        return func_1A0B00();
    case 2:
    case 3:
    case 4:
        return func_1A12F0();
    }
    return 0;
}
