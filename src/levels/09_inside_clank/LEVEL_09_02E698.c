/* LEVEL_09:0x02E698 -- placement copy of LEVEL_01_02F838.c: returns a word of the record the global points to. */
typedef struct { char pad00[0x2DC]; int w2DC; } Rec;
extern Rec *D_00218B28;

int func_02E698(void)
{
    return D_00218B28->w2DC;
}
