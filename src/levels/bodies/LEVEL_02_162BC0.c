/* LEVEL_02:0x162BC0 -- advances a state timer on a sub-record and latches a flag once it passes a threshold. */

char *func_01ACB0(void);
int func_08B060(int a0, char *a1);

void func_162BC0(char *a0)
{
    char *s0;
    char *r;
    float f;

    s0 = *(char **)(a0 + 0x54);
    if (*(int *)(s0 + 0x10) == 0) {
        return;
    }
    if (*(unsigned char *)(s0 + 0x18) != 0) {
        r = func_01ACB0();
        if (func_08B060(*(int *)(s0 + 0x10), r) == 0) {
            *(unsigned char *)(s0 + 0x18) = 0;
            return;
        }
    }
    if (*(unsigned char *)(s0 + 0x18) == 0) {
        r = func_01ACB0();
        if (func_08B060(*(int *)(s0 + 0x10), r) != 0) {
            f = *(float *)(s0 + 0x14) + 1.0f;
            *(float *)(s0 + 0x14) = f;
            if (150.0f < f) {
                *(int *)(s0 + 0x14) = 0;
                *(unsigned char *)(s0 + 0x18) = 1;
            }
        }
    }
}
