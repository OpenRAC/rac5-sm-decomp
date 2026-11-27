/* LEVEL_07:0x1DBC30 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1DB848(void);
extern int func_1DB250(void);
extern int func_1DBA40(void);

int func_1DBC30(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1DB848();
    case 1:
        return func_1DB250();
    case 2:
    case 3:
    case 4:
        return func_1DBA40();
    }
    return 0;
}
