/* LEVEL_07:0x1C3708 -- when the flag at 0xAB is clear, requests mode 0x0B; the next function clears a pending latch. */

void func_1C2FF8(void *a, int b);
void func_07F200(void *a, void *b, int c);
void func_1DC258(void *a, void *b);

void func_1C3708(char *a0)
{
    if (*(unsigned char *)(*(char **)(a0 + 0x58) + 0xAB) == 0) {
        func_1C2FF8(a0, 0xB);
    }
}

void func_1C3738(char *a0)
{
    char *s1;
    char *s0;

    s1 = *(char **)(a0 + 0x58);
    if (*(unsigned char *)(s1 + 0xAC) != 0) {
        if (*(unsigned char *)(s1 + 0xAB) != 0) {
            s0 = s1 + 0x4C;
            func_07F200(a0, s0, 2);
            *(unsigned char *)(s1 + 0xAD) = 1;
            func_1DC258(a0, s0);
        }
        *(unsigned char *)(s1 + 0xAC) = 0;
    }
}
