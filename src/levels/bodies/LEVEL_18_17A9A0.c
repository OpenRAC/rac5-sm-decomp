/* LEVEL_18:0x17A9A0 -- starts a pending action when its flag is set, and a second function clears the latch. */

void func_17A3F0(void *a, int b);
void func_06F6C8(void *a, void *b, int c);
void func_188E70(void *a, void *b);

void func_17A9A0(char *a0)
{
    if (*(unsigned char *)(*(char **)(a0 + 0x58) + 0xAF) == 0) {
        func_17A3F0(a0, 0xB);
    }
}

void func_17A9D0(char *a0)
{
    char *s1;

    s1 = *(char **)(a0 + 0x58);
    if (*(unsigned char *)(s1 + 0xB0) != 0) {
        if (*(unsigned char *)(s1 + 0xAF) != 0) {
            func_06F6C8(a0, s1 + 0x4C, 2);
            *(unsigned char *)(s1 + 0xB1) = 1;
            func_188E70(a0, s1 + 0x4C);
        }
        *(unsigned char *)(s1 + 0xB0) = 0;
    }
}
