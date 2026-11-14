/* LEVEL_06:0x02DC18 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_0021E128;

int func_02DC18(void)
{
    return D_0021E128->w2DC;
}
