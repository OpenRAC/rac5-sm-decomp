/* LEVEL_08:0x20EA18 -- placement copy of LEVEL_04_1E6E48.c: state 1 calls a helper; state 2 decays a timer and either clears the state or calls the helper. */

extern char D_003EB448[];

void func_082D78(char *a, char *b);

void func_20EA18(char *a0)
{
    unsigned char v;
    float f;

    v = *(unsigned char *)(a0 + 0x28);
    if (v == 1) {
        func_082D78(a0, D_003EB448);
    } else if (v == 2) {
        f = *(float *)(a0 + 0x24) - 0.2222222238779068f;
        *(float *)(a0 + 0x24) = f;
        if (f <= 0.0f) {
            *(unsigned char *)(a0 + 0x28) = 0;
        } else {
            func_082D78(a0, D_003EB448);
        }
    }
}
