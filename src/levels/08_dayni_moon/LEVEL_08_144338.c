extern int func_1443F8(int);
extern char *D_0024FF0C;

unsigned int func_144338(void)
{
    if (func_1443F8(0) == 0) return 0;
    return (*(int *)(D_0024FF0C + 0x94) >> 14) & 1;
}
