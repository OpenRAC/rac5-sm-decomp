/* LEVEL_08:0x20BD10 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_20B928(void);
extern int func_20B330(void);
extern int func_20BB20(void);

int func_20BD10(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_20B928();
    case 1:
        return func_20B330();
    case 2:
    case 3:
    case 4:
        return func_20BB20();
    }
    return 0;
}
