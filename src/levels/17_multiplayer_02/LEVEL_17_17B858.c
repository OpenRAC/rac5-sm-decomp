/* LEVEL_17:0x17B858 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_17B470(void);
extern int func_17AE78(void);
extern int func_17B668(void);

int func_17B858(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_17B470();
    case 1:
        return func_17AE78();
    case 2:
    case 3:
    case 4:
        return func_17B668();
    }
    return 0;
}
