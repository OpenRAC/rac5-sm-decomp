/* LEVEL_16:0x022660 -- scans three indexed slots with a helper and, on the first hit, returns whether the byte at that index of a second record is set. */

struct Rec {
    char pad_00[0x48];
    unsigned char b_48[3];
};

int func_0224D0(void *a0, int a1, int a2, int a3);
struct Rec *func_0220C8(void *a0, int a1);

int func_022660(void *a0, int a1, int a2)
{
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (func_0224D0(a0, a1, i, a2) != 0) {
            return func_0220C8(a0, a2)->b_48[i] != 0;
        }
    }
    return 0;
}
