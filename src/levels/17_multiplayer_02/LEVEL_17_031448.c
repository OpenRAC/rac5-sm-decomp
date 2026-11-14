/* LEVEL_17:0x031448 -- placement copy of LEVEL_01_035988.c: clears the two pending slots, flips the double-buffer index and records the new buffer's base and the current entry's address. */
struct Blk {
    char pad0[0x1A00];
    int slot[2];
    char pad1A08[0x80];
    int w1A88;
    int base[2];
    int w1A94;
    int w1A98;
    int w1A9C;
    int w1AA0;
};

extern struct Blk D_001D3340;

void func_031448(void)
{
    int i;

    for (i = 1; i >= 0; i--) {
        D_001D3340.slot[i] = 0;
    }
    D_001D3340.w1A98 ^= 1;
    D_001D3340.w1A9C = D_001D3340.base[D_001D3340.w1A98];
    D_001D3340.w1A88 = 1;
    D_001D3340.w1AA0 = D_001D3340.w1A94 * 0x90 + D_001D3340.w1A9C;
}
