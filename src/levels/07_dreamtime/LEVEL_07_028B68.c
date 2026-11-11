typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_002082AC;
extern Rec D_00246840;

void func_028B68(int slot)
{
    D_00246840 = *(Rec *)(D_002082AC + slot * 52 + 0xE8);
}
