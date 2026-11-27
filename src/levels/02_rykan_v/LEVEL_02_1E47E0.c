/* LEVEL_02:0x1E47E0 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1E43F8(void);
extern int func_1E3E00(void);
extern int func_1E45F0(void);

int func_1E47E0(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1E43F8();
    case 1:
        return func_1E3E00();
    case 2:
    case 3:
    case 4:
        return func_1E45F0();
    }
    return 0;
}
