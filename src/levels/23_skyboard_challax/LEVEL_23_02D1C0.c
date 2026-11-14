/* LEVEL_23:0x02D1C0 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_001FE828;

int func_02D1C0(void)
{
    return D_001FE828->w2DC;
}
