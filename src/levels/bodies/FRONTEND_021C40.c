/* FRONTEND:0x021C40 -- placement copy of LEVEL_01_134368.c. */
typedef struct {
    char before[0x818];
    int value;
    char after[8];
} Entry;
extern Entry D_001EC1E8[];

int func_021C40(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_001EC1E8[index].value == 7;
}