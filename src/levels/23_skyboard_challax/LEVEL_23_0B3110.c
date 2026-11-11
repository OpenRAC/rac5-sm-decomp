extern long long func_0B3100(void);
extern unsigned int D_002F9E70[];

void func_0B3110(void)
{
    if (func_0B3100() != 0) {
        D_002F9E70[2]--;
        if (D_002F9E70[2] == 0) D_002F9E70[0] = 3;
    }
    if (D_002F9E70[3] != 0) {
        if (D_002F9E70[3] != 0xffffffffu) D_002F9E70[3]--;
    }
}
