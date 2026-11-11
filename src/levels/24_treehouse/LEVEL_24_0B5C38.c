extern long long func_0B5C28(void);
extern unsigned int D_002F48F0[];

void func_0B5C38(void)
{
    if (func_0B5C28() != 0) {
        D_002F48F0[2]--;
        if (D_002F48F0[2] == 0) D_002F48F0[0] = 3;
    }
    if (D_002F48F0[3] != 0) {
        if (D_002F48F0[3] != 0xffffffffu) D_002F48F0[3]--;
    }
}
