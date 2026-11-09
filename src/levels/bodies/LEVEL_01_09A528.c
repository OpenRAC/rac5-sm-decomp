/* LEVEL_01:0x09A528 -- difference of two adjacent unsigned short entries in one record. */
typedef struct { char pad[0x34]; unsigned short v[0x2D0]; char pad2[0x170C - 0x34 - 0x2D0 * 2]; } Rec;
extern Rec D_0029AEF8[];

int func_09A528(int first, int second, int group)
{
    unsigned int left = D_0029AEF8[group].v[first];
    unsigned int right = D_0029AEF8[group].v[second + 1];
    return right - left;
}
