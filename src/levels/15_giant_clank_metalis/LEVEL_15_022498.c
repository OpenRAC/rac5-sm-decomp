/* LEVEL_15:0x022498 -- placement copy of LEVEL_01_028808.c. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_00148C2C;
extern Rec D_001790C0;

void func_022498(int slot)
{
    D_001790C0 = *(Rec *)(D_00148C2C + slot * 52 + 0xE8);
}
