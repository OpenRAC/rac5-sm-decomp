extern char D_00225960[];
extern int D_002336F0;
extern int sprintf(char *, const char *, ...);
extern int func_0253C0(char *);

int func_025410(int value)
{
    char scratch[256];
    sprintf(scratch, D_00225960, D_002336F0, (signed char)(value + 0x41));
    return func_0253C0(scratch);
}
