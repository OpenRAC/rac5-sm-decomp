/* LEVEL_16:0x08B0A8 -- placement copy of LEVEL_01_09A568.c: flips a two-slot toggle in a 0x170C-byte record and copies the chosen slot. */
typedef struct {
    int pad_00[3];
    int slot[2];
    int f_14;
    int f_18;
    int f_1C;
    unsigned int toggle;
    char pad_24[0x170C - 0x24];
} Rec;
extern Rec D_00251338[];
void func_08B0A8(int index)
{
    D_00251338[index].toggle ^= 1;
    D_00251338[index].f_18 = D_00251338[index].slot[D_00251338[index].toggle];
    D_00251338[index].f_1C = D_00251338[index].f_18 + D_00251338[index].f_14 - 0x80;
}
