/* LEVEL_16:0x026108 -- placement copy of LEVEL_01_028808.c. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_001A1AB4;
extern Rec D_001DFC40;

void func_026108(int slot)
{
    D_001DFC40 = *(Rec *)(D_001A1AB4 + slot * 52 + 0xE8);
}
