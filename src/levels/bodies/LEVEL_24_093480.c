/* LEVEL_24:0x093480 -- placement copy of LEVEL_01_09A528.c: difference of two adjacent unsigned short entries in one record. */
typedef struct { char pad[0x34]; unsigned short v[0x2D0]; char pad2[0x170C - 0x34 - 0x2D0 * 2]; } Rec;
extern Rec D_00266DB8[];

int func_093480(int first, int second, int group)
{
    unsigned int left = D_00266DB8[group].v[first];
    unsigned int right = D_00266DB8[group].v[second + 1];
    return right - left;
}
