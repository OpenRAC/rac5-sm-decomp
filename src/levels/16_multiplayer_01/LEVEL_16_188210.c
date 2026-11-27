/* LEVEL_16:0x188210 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_187E28(void);
extern int func_187830(void);
extern int func_188020(void);

int func_188210(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_187E28();
    case 1:
        return func_187830();
    case 2:
    case 3:
    case 4:
        return func_188020();
    }
    return 0;
}
