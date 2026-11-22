/* LEVEL_07:0x1C5908 -- prepares the object (clears the bytes at +0x76/+0x77, sets flag 0x20), turns the two offsets of its resource block (+0x54) into pointers by adding the global base, and when both were set queries the option bits 0 and 1 of group 0x7A to fill the two global flag bytes (0x40 or 1); returns 1 when both were set, 0 otherwise. */
typedef struct {
    char pad_00[4];
    char flag_04;
    char pad_05[7];
    char flag_0C;
    char flag_0D;
} Flags;

extern int D_0021B094;
extern Flags D_00246830;

extern void func_028C88(void);
extern unsigned int func_027810(int index, unsigned int bit);

static __inline__ int Rebase(int *slot)
{
    if (*slot == 0) {
        return 0;
    }
    *slot = D_0021B094 + *slot;
    return 1;
}

int func_1C5908(char *object)
{
    int *info;
    int bad;

    *(unsigned char *)(object + 0x76) = 0;
    info = *(int **)(object + 0x54);
    *(unsigned char *)(object + 0x77) = 0;
    *(unsigned int *)(object + 0x64) |= 0x20;
    func_028C88();
    bad = 0;
    if (!Rebase(info)) {
        bad = 1;
    }
    if (!Rebase(info + 1)) {
        bad = 1;
    }
    if (!bad) {
        if (func_027810(0x7A, 0) != 0) {
            D_00246830.flag_0C = 0x40;
        } else {
            D_00246830.flag_0C = 1;
        }
        if (func_027810(0x7A, 1) != 0) {
            D_00246830.flag_0D = 0x40;
        } else {
            D_00246830.flag_0D = 1;
        }
        return 1;
    }
    return 0;
}
