/* LEVEL_09:0x1A2C38 -- prepares the object (clears the bytes at +0x76/+0x77, sets flag 0x20), turns the three offsets of its resource block (+0x54) into pointers by adding the global base, and when all three were set queries the option bits 4 and 5 of group 0x7B to fill the two global flag bytes (0x40 or 1); returns 1 when all three were set, 0 otherwise. */
typedef struct {
    char pad_00[4];
    char flag_04;
    char pad_05[7];
    char flag_0C;
    char flag_0D;
} Flags;

extern int D_001F0894;
extern unsigned char D_001DFF6C;
extern Flags D_002186B0;

extern void func_0277B8(void);
extern unsigned int func_0264B8(int index, unsigned int bit);

static __inline__ int Rebase(int *slot)
{
    if (*slot == 0) {
        return 0;
    }
    *slot = D_001F0894 + *slot;
    return 1;
}

int func_1A2C38(char *object)
{
    int *info;
    int bad;

    *(unsigned char *)(object + 0x76) = 0;
    info = *(int **)(object + 0x54);
    *(unsigned char *)(object + 0x77) = 0;
    *(unsigned int *)(object + 0x64) |= 0x20;
    if (D_001DFF6C != 0) {
        func_0277B8();
    }
    bad = 0;
    if (!Rebase(info)) {
        bad = 1;
    }
    if (!Rebase(info + 1)) {
        bad = 1;
    }
    if (!Rebase(info + 2)) {
        bad = 1;
    }
    if (!Rebase(info + 3)) {
        bad = 1;
    }
    if (!bad) {
        if (func_0264B8(0x7B, 0) != 0) {
            D_002186B0.flag_0C = 0x40;
        } else {
            D_002186B0.flag_0C = 1;
        }
        if (func_0264B8(0x7B, 1) != 0) {
            D_002186B0.flag_0D = 0x40;
        } else {
            D_002186B0.flag_0D = 1;
        }
        return 1;
    }
    return 0;
}
