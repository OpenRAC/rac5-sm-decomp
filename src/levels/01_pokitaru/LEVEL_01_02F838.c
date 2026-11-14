/* LEVEL_01:0x02F838 -- returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_002313A8;

int func_02F838(void)
{
    return D_002313A8->w2DC;
}
