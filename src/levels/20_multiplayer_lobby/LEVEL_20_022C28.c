/* LEVEL_20:0x022C28 -- placement copy of LEVEL_01_028808.c. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_00104194;
extern Rec D_001375C0;

void func_022C28(int slot)
{
    D_001375C0 = *(Rec *)(D_00104194 + slot * 52 + 0xE8);
}
