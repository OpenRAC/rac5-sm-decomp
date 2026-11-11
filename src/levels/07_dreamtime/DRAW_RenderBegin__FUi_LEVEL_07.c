/* LEVEL_07:0x09C548 -- placement copy of LEVEL_01_09A568.c: flips a two-slot toggle in a 0x170C-byte record and copies the chosen slot. */
typedef struct {
    int pad_00[3];
    int slot[2];
    int f_14;
    int f_18;
    int f_1C;
    unsigned int toggle;
    char pad_24[0x170C - 0x24];
} Rec;
extern Rec D_002B07F8[];
void DRAW_RenderBegin__FUi(int index)
{
    D_002B07F8[index].toggle ^= 1;
    D_002B07F8[index].f_18 = D_002B07F8[index].slot[D_002B07F8[index].toggle];
    D_002B07F8[index].f_1C = D_002B07F8[index].f_18 + D_002B07F8[index].f_14 - 0x80;
}
