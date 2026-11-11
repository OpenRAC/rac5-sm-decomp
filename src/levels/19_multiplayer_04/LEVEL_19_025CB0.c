/* LEVEL_19:0x025CB0 -- placement copy of LEVEL_01_028808.c. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_001A2C34;
extern Rec D_001DFDC0;

void func_025CB0(int slot)
{
    D_001DFDC0 = *(Rec *)(D_001A2C34 + slot * 52 + 0xE8);
}
