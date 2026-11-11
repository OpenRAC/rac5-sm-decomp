/* LEVEL_17:0x021FE0 -- placement copy of LEVEL_16_022660.c: scans three indexed slots with a helper and, on the first hit, returns whether the byte at that index of a second record is set. */

struct Rec {
    char pad_00[0x48];
    unsigned char b_48[3];
};

int func_021E50(void *a0, int a1, int a2, int a3);
struct Rec *func_021A48(void *a0, int a1);

int func_021FE0(void *a0, int a1, int a2)
{
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (func_021E50(a0, a1, i, a2) != 0) {
            return func_021A48(a0, a2)->b_48[i] != 0;
        }
    }
    return 0;
}
