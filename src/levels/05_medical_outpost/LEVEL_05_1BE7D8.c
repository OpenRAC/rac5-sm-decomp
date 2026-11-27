/* LEVEL_05:0x1BE7D8 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1BE3F0(void);
extern int func_1BDDF8(void);
extern int func_1BE5E8(void);

int func_1BE7D8(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1BE3F0();
    case 1:
        return func_1BDDF8();
    case 2:
    case 3:
    case 4:
        return func_1BE5E8();
    }
    return 0;
}
