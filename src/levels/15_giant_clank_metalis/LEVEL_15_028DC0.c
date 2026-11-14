/* LEVEL_15:0x028DC0 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_00179528;

int func_028DC0(void)
{
    return D_00179528->w2DC;
}
