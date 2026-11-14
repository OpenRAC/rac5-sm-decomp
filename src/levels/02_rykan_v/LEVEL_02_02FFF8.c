/* LEVEL_02:0x02FFF8 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_002488A8;

int func_02FFF8(void)
{
    return D_002488A8->w2DC;
}
