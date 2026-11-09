/* LEVEL_05:0x023560 -- placement copy of LEVEL_01_0245C8.c: returns the address of one 0x58-byte record for a valid index and kind, else 0. */
typedef struct { int a; int kind; char pad[0x50]; } Rec;
extern Rec D_001E2958[];

Rec *func_023560(unsigned int index, int kind)
{
    int step = kind + 1;
    if (index < 25 && step >= 0 && step < 2) {
        if (D_001E2958[step + index].kind == 3)
            return &D_001E2958[index] + step;
    }
    return 0;
}
