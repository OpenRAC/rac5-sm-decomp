/* LEVEL_17:0x025A88 -- placement copy of LEVEL_01_028808.c. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_001950B4;
extern Rec D_001D0F40;

void func_025A88(int slot)
{
    D_001D0F40 = *(Rec *)(D_001950B4 + slot * 52 + 0xE8);
}
