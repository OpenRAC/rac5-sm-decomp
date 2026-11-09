/* LEVEL_04:0x1E6E48 -- state 1 calls a helper; state 2 decays a timer and either clears the state or calls the helper. */

extern char D_003B3EF0[];

void func_07E1F8(char *a, char *b);

void func_1E6E48(char *a0)
{
    unsigned char v;
    float f;

    v = *(unsigned char *)(a0 + 0x28);
    if (v == 1) {
        func_07E1F8(a0, D_003B3EF0);
    } else if (v == 2) {
        f = *(float *)(a0 + 0x24) - 0.2222222238779068f;
        *(float *)(a0 + 0x24) = f;
        if (f <= 0.0f) {
            *(unsigned char *)(a0 + 0x28) = 0;
        } else {
            func_07E1F8(a0, D_003B3EF0);
        }
    }
}
