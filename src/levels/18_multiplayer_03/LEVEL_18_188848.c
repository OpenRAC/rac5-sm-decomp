/* LEVEL_18:0x188848 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_188460(void);
extern int func_187E68(void);
extern int func_188658(void);

int func_188848(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_188460();
    case 1:
        return func_187E68();
    case 2:
    case 3:
    case 4:
        return func_188658();
    }
    return 0;
}
