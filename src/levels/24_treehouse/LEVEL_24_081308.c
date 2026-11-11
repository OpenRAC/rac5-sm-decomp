/* LEVEL_24:0x081308 -- placement copy of LEVEL_08_090130.c. */
extern int func_081350(int mask);
extern char *D_001C6EDC;

void func_081308(int mask, int value)
{
    if (func_081350(mask) != 0)
        *(int *)(D_001C6EDC + 0x1d0) = value;
}
