typedef struct { char before[0x68]; char *ptr; } Entry;
extern int D_0021A724;
extern Entry D_0021A9D8[];
void func_0D0240(unsigned int index)
{
    if (index < 4) {
        char *record = D_0021A9D8[D_0021A724].ptr;
        if (record != 0)
            *(int *)(record + 0x14) = -1;
    }
}