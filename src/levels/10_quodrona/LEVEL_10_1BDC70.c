/* LEVEL_10:0x1BDC70 -- prepares the object (clears the bytes at +0x76/+0x77, sets flag 0x20), turns the three offsets of its resource block (+0x54) into pointers by adding the global base, and when all three were set queries the option bits 4 and 5 of group 0x7B to fill the two global flag bytes (0x40 or 1); returns 1 when all three were set, 0 otherwise. */
typedef struct {
    char pad_00[4];
    char flag_04;
    char pad_05[7];
    char flag_0C;
    char flag_0D;
} Flags;

extern int D_0020F9F4;
extern Flags D_0023A330;

extern void func_028180(void);
extern unsigned int func_026D90(int index, unsigned int bit);

static __inline__ int Rebase(int *slot)
{
    if (*slot == 0) {
        return 0;
    }
    *slot = D_0020F9F4 + *slot;
    return 1;
}

int func_1BDC70(char *object)
{
    int *info;
    int bad;

    *(unsigned char *)(object + 0x76) = 0;
    info = *(int **)(object + 0x54);
    *(unsigned char *)(object + 0x77) = 0;
    *(unsigned int *)(object + 0x64) |= 0x20;
    func_028180();
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
    if (!bad) {
        if (func_026D90(0x7B, 4) != 0) {
            D_0023A330.flag_0C = 0x40;
        } else {
            D_0023A330.flag_0C = 1;
            D_0023A330.flag_04 = 0;
        }
        if (func_026D90(0x7B, 5) != 0) {
            D_0023A330.flag_0D = 0x40;
        } else {
            D_0023A330.flag_0D = 1;
        }
        return 1;
    }
    return 0;
}
