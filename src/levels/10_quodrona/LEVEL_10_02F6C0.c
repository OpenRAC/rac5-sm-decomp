/* LEVEL_10:0x02F6C0 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_0023A7A8;

int func_02F6C0(void)
{
    return D_0023A7A8->w2DC;
}
