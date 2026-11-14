/* LEVEL_07:0x02FB70 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_00246CA8;

int func_02FB70(void)
{
    return D_00246CA8->w2DC;
}
