/* LEVEL_19:0x184FA8 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_184BC0(void);
extern int func_1845C8(void);
extern int func_184DB8(void);

int func_184FA8(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_184BC0();
    case 1:
        return func_1845C8();
    case 2:
    case 3:
    case 4:
        return func_184DB8();
    }
    return 0;
}
