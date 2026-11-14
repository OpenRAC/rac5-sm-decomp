/* LEVEL_04:0x02F4D8 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_0024BBA8;

int func_02F4D8(void)
{
    return D_0024BBA8->w2DC;
}
