typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_001FD670;
extern int func_11FB68(int);
void func_028308(void)
{
    int value = func_11FB68((int)0x03EB6DAEu);
    D_001FD670.value = value;
    if (value == 0)
        D_001FD670.limit = 0x7fffffff;
}