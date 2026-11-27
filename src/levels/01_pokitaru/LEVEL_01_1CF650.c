/* LEVEL_01:0x1CF650 -- dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1CF268(void);
extern int func_1CEC70(void);
extern int func_1CF460(void);

int func_1CF650(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1CF268();
    case 1:
        return func_1CEC70();
    case 2:
    case 3:
    case 4:
        return func_1CF460();
    }
    return 0;
}
