/* LEVEL_24:0x1A0048 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_19FC60(void);
extern int func_19F668(void);
extern int func_19FE58(void);

int func_1A0048(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_19FC60();
    case 1:
        return func_19F668();
    case 2:
    case 3:
    case 4:
        return func_19FE58();
    }
    return 0;
}
