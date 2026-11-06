typedef struct { char before[0x68]; char *ptr; } Entry;
extern int D_00216224;
extern Entry D_002164D8[];
void func_0D1338(unsigned int index)
{
    if (index < 4) {
        char *record = D_002164D8[D_00216224].ptr;
        if (record != 0)
            *(int *)(record + 0x14) = -1;
    }
}