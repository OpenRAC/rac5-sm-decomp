/* LEVEL_10:0x1D39F8 -- placement copy of LEVEL_01_1CF650.c: dispatches on the kind field at +0x40 to one of three helpers. */
extern int func_1D3610(void);
extern int func_1D3018(void);
extern int func_1D3808(void);

int func_1D39F8(char *object)
{
    switch (*(int *)(object + 0x40)) {
    case 0:
        return func_1D3610();
    case 1:
        return func_1D3018();
    case 2:
    case 3:
    case 4:
        return func_1D3808();
    }
    return 0;
}
