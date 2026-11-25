extern char D_002566E0[];
extern int D_00264470;
extern int sprintf(char *, const char *, ...);
extern int func_025D70(char *);

int func_025DC0(int value)
{
    char scratch[256];
    sprintf(scratch, D_002566E0, D_00264470, (signed char)(value + 0x41));
    return func_025D70(scratch);
}
