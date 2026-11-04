typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_001E2EAC;
extern Rec D_0021DCC0;

void func_026C40(int slot)
{
    D_0021DCC0 = *(Rec *)(D_001E2EAC + slot * 52 + 0xE8);
}
