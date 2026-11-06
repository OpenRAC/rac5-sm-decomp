extern int func_10F230(int);
extern char *D_001A815C;

unsigned int func_10F1F0(void)
{
    if (func_10F230(0) == 0) return 0;
    return (*(int *)(D_001A815C + 0x94) >> 14) & 1;
}
