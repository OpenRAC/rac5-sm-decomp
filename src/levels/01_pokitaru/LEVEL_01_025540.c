extern char D_0020CA60[];
extern int D_0021A7F0;
extern int sprintf(char *, const char *, ...);
extern int func_0254F0(char *);

int func_025540(int value)
{
    char scratch[256];
    sprintf(scratch, D_0020CA60, D_0021A7F0, (signed char)(value + 0x41));
    return func_0254F0(scratch);
}
