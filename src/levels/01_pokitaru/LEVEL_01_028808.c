typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_001F3FAC;
extern Rec D_00230F40;

void func_028808(int slot)
{
    D_00230F40 = *(Rec *)(D_001F3FAC + slot * 52 + 0xE8);
}
