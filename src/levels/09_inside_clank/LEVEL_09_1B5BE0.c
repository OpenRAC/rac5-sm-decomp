/* LEVEL_09:0x1B5BE0 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1B57F8(void);
extern int func_1B5200(void);
extern int func_1B59F0(void);

int func_1B5BE0(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1B57F8();
    case 1:
        return func_1B5200();
    case 2:
    case 3:
    case 4:
        return func_1B59F0();
    }
    return 0;
}
