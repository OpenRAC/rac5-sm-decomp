/* LEVEL_18:0x117250 -- placement copy of LEVEL_16_118228.c: sets fade color and alpha; then draws a two-pass overlay. */
extern int D_001B9958;
extern int D_001B995C;
extern char D_002E0090[];
extern void func_096550(int a, int b);
extern void func_096370(unsigned c);
extern void func_098148(int x, int y, void *p, float a, float b);

void func_117250(unsigned char v)
{
    D_001B9958 = v;
    D_001B995C = 0xFF;
}

void func_117270(void)
{
    unsigned i;

    if (D_001B995C == 0) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_096550(i, 0);
        func_096370((D_001B995C << 24) | 0xFFFFFF);
        func_098148(0xF0, 0xD9, D_002E0090, 0.8f, 0.8f);
        func_096370(0xFFFFFFFF);
    }
}
