typedef struct { char before[0x68]; char *ptr; } Entry;
extern int D_0024A124;
extern Entry D_0024A3D8[];
void func_0D5950(unsigned int index)
{
    if (index < 4) {
        char *record = D_0024A3D8[D_0024A124].ptr;
        if (record != 0)
            *(int *)(record + 0x14) = -1;
    }
}