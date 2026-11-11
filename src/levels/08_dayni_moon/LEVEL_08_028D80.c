typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_0023CB2C;
extern Rec D_002801C0;

void func_028D80(int slot)
{
    D_002801C0 = *(Rec *)(D_0023CB2C + slot * 52 + 0xE8);
}
