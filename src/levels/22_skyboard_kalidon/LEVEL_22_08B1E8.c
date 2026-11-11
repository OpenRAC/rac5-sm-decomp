/* LEVEL_22:0x08B1E8 -- placement copy of LEVEL_01_09A528.c: difference of two adjacent unsigned short entries in one record. */
typedef struct { char pad[0x34]; unsigned short v[0x2D0]; char pad2[0x170C - 0x34 - 0x2D0 * 2]; } Rec;
extern Rec D_001F0AB8[];

int func_08B1E8(int first, int second, int group)
{
    unsigned int left = D_001F0AB8[group].v[first];
    unsigned int right = D_001F0AB8[group].v[second + 1];
    return right - left;
}
