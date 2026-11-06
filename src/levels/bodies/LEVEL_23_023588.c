extern char D_001DFBE0[];
extern int D_001ED970;
extern int sprintf(char *, const char *, ...);
extern void func_023538(char *);

void func_023588(int value)
{
    char scratch[256];
    sprintf(scratch, D_001DFBE0, D_001ED970, (signed char)(value + 0x41));
    func_023538(scratch);
}
