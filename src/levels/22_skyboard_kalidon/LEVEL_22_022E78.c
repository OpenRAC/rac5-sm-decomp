/* LEVEL_22:0x022E78 -- placement copy of LEVEL_01_028808.c. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_0015332C;
extern Rec D_00182B40;

void func_022E78(int slot)
{
    D_00182B40 = *(Rec *)(D_0015332C + slot * 52 + 0xE8);
}
