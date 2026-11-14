/* LEVEL_05:0x02E4F0 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_0021D0A8;

int func_02E4F0(void)
{
    return D_0021D0A8->w2DC;
}
