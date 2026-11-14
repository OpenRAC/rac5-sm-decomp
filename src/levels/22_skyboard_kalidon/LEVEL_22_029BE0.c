/* LEVEL_22:0x029BE0 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_00182FA8;

int func_029BE0(void)
{
    return D_00182FA8->w2DC;
}
