/* LEVEL_10:0x190EC8 -- placement copy of LEVEL_08_1B82F8.c: draws a random percentage and calls a helper with one of two modes. */

int rand(void);
void func_190CE8(char *a0, int a1);

void func_190EC8(char *a0)
{
    char *s0;
    float f;
    float k;
    int a1;

    s0 = *(char **)(a0 + 0x54);
    k = 100.0f;
    f = (float)rand() * 4.656612873077393e-10f * k;
    a1 = (f < *(float *)(s0 + 0x14)) ? 2 : 1;
    func_190CE8(a0, a1);
}
