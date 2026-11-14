/* LEVEL_08:0x02FFB0 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_00280628;

int func_02FFB0(void)
{
    return D_00280628->w2DC;
}
