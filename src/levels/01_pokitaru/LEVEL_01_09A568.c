/* LEVEL_01:0x09A568 -- flips a two-slot toggle in a 0x170C-byte record and copies the chosen slot. */
typedef struct {
    int pad_00[3];
    int slot[2];
    int f_14;
    int f_18;
    int f_1C;
    unsigned int toggle;
    char pad_24[0x170C - 0x24];
} Rec;
extern Rec D_0029AEF8[];
void func_09A568(int index)
{
    D_0029AEF8[index].toggle ^= 1;
    D_0029AEF8[index].f_18 = D_0029AEF8[index].slot[D_0029AEF8[index].toggle];
    D_0029AEF8[index].f_1C = D_0029AEF8[index].f_18 + D_0029AEF8[index].f_14 - 0x80;
}
