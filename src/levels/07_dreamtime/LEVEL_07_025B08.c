extern char D_00221760[];
extern int D_0022F4F0;
extern int sprintf(char *, const char *, ...);
extern void func_025AB8(char *);

void func_025B08(int value)
{
    char scratch[256];
    sprintf(scratch, D_00221760, D_0022F4F0, (signed char)(value + 0x41));
    func_025AB8(scratch);
}
