/* FRONTEND:0x021A00 -- placement copy of LEVEL_01_134128.c. */
struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_001EC1E8[];

int func_021A00(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_001EC1E8[index].value;
}
