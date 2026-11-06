extern char D_001E4410[];
extern int func_020C68(void *ptr);
extern int func_0273E8(int value);
extern int func_054EA0(void *ptr);
extern int func_078D08(void);

int func_027408(void)
{
    int n;

    n = *(int *)(func_020C68(D_001E4410) + 4);
    return func_0273E8(7) == 0
        || n != 2
        || func_054EA0(D_001E4410) != 0
        || func_078D08() == 0x100
        || func_078D08() == 0x80;
}
