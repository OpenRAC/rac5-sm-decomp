/* LEVEL_03:0x087EC0 -- placement copy of LEVEL_08_090130.c. */
extern int func_087F08(int mask);
extern char *D_0020E8DC;

void func_087EC0(int mask, int value)
{
    if (func_087F08(mask) != 0)
        *(int *)(D_0020E8DC + 0x1d0) = value;
}
