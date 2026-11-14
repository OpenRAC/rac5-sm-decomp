/* LEVEL_03:0x02F628 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_0024C228;

int func_02F628(void)
{
    return D_0024C228->w2DC;
}
