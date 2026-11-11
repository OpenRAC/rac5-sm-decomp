/* LEVEL_23:0x171428 -- placement copy of LEVEL_01_186540.c: puts the record into its start state, kicks the optional particle burst, resets the slot fields and unlocks the pending state byte. */

typedef struct {
    char pad_00[0xD];
    unsigned char b;
} Flags;

extern int D_001ED970;
extern Flags D_001FE3B0;
extern void func_0127A8(float *p, float f0, float f1, float f2, float f3, float f4, float f5);
extern void func_074128(char *o, int a, int b, int c, float f0, float f1);

void func_171428(char *o, char *p)
{
    char *s;

    s = *(char **)(o + 0x58);
    o[0x46] = 2;
    *(int *)(o + 0x64) |= 0x40000;
    if (*(float *)(s + 0xE8) == 0.0f && *(unsigned char *)(p + 0x21C) != 0) {
        func_0127A8((float *)(o + 0x30), 25.0f, 144.0f, 20.0f, 8.0f, 10.0f, 0.3f);
        *(unsigned char *)(s + 0xC) = 1;
    }
    *(float *)(s + 0x294) = 0.0f;
    *(float *)(s + 0x290) = 2.0f;
    *(float *)(s + 0x264) = 0.06666667f;
    func_074128(o, 3, 0, 1, 0.1f, *(float *)(s + 0x294));
    if (D_001ED970 == 7 && (unsigned int)(D_001FE3B0.b - 1) < 0x3F) {
        D_001FE3B0.b = 0x80;
    } else if (D_001ED970 == 9 && (unsigned int)(D_001FE3B0.b - 1) < 0x3F) {
        D_001FE3B0.b = 0x80;
    }
}
