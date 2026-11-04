typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_0020D12C;
extern Rec D_0024B740;

void func_0282F8(int slot)
{
    D_0024B740 = *(Rec *)(D_0020D12C + slot * 52 + 0xE8);
}
