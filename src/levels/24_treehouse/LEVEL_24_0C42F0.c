typedef struct { char before[0x68]; char *ptr; } Entry;
extern int D_001D1EE4;
extern Entry D_001D2198[];
void func_0C42F0(unsigned int index)
{
    if (index < 4) {
        char *record = D_001D2198[D_001D1EE4].ptr;
        if (record != 0)
            *(int *)(record + 0x14) = -1;
    }
}