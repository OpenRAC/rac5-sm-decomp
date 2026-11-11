extern unsigned char func_01A490(int);

unsigned char func_190948(char *record)
{
    return func_01A490(**(int **)(record + 0x54)) ^ 1u;
}
