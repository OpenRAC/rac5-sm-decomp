/* LEVEL_06:0x022C68 -- placement copy of LEVEL_01_024560.c: reports whether the neighbouring record in state 2 has reached level 4. */
typedef struct Record {
    int pad_00;
    int state;
    char pad_08[0x34];
    unsigned int level;
    char pad_40[0x18];
} Record;

extern Record D_001E24D8[];

int func_022C68(unsigned int index, int step)
{
    step++;
    if (index < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_001E24D8[step + index].state == 2)
                    return D_001E24D8[step + index].level >= 4;
            }
        }
    }
    return 0;
}
