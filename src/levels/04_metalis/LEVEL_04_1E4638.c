/* LEVEL_04:0x1E4638 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1E4250(void);
extern int func_1E3C58(void);
extern int func_1E4448(void);

int func_1E4638(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1E4250();
    case 1:
        return func_1E3C58();
    case 2:
    case 3:
    case 4:
        return func_1E4448();
    }
    return 0;
}
