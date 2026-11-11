/* LEVEL_16:0x037F38 -- sets a flag field in each non-null record of a six-entry table, then updates a 64-bit word. */
struct Rec4 {
    char pad0[0x64];
    int w64;
};

void func_037F38(char *a0, int a1)
{
    int flag;
    int shifted;
    int mask;
    unsigned int i;
    struct Rec4 **q;
    struct Rec4 *p;

    flag = (a1 ^ 1) & 1;
    i = 0;
    mask = -33;
    shifted = flag << 5;
    q = (struct Rec4 **)(a0 + 0x5B8);
    do {
        p = *q;
        i++;
        if (p != 0) {
            p->w64 = (p->w64 & mask) | shifted;
        }
        q++;
    } while (i < 6);
    *(long long *)(a0 + 0x968) = (*(long long *)(a0 + 0x968) & -129) | ((long long)(a1 & 1) << 7);
}
