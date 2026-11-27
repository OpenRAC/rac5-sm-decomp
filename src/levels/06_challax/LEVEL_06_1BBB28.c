/* LEVEL_06:0x1BBB28 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1BB740(void);
extern int func_1BB148(void);
extern int func_1BB938(void);

int func_1BBB28(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1BB740();
    case 1:
        return func_1BB148();
    case 2:
    case 3:
    case 4:
        return func_1BB938();
    }
    return 0;
}
