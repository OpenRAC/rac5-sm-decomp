/* LEVEL_18:0x0256B8 -- placement copy of LEVEL_01_028808.c. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_001A2F34;
extern Rec D_001DFFC0;

void func_0256B8(int slot)
{
    D_001DFFC0 = *(Rec *)(D_001A2F34 + slot * 52 + 0xE8);
}
