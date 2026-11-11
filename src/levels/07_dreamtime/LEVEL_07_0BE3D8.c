extern long long func_0BE3C8(void);
extern unsigned int D_0033E330[];

void func_0BE3D8(void)
{
    if (func_0BE3C8() != 0) {
        D_0033E330[2]--;
        if (D_0033E330[2] == 0) D_0033E330[0] = 3;
    }
    if (D_0033E330[3] != 0) {
        if (D_0033E330[3] != 0xffffffffu) D_0033E330[3]--;
    }
}
