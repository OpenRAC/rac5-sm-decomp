/* LEVEL_23:0x17DFA8 -- placement copy of LEVEL_22_1312C8.c: returns one bit of the low byte of the argument. */
extern int D_001DBE30;
extern int func_11FB10(void);

int func_17DFA8(unsigned int value)
{
    int masked = value & 0xff;
    int shift = D_001DBE30;
    if (shift >= 0)
        return (masked >> shift) & 1;
    return (masked >> func_11FB10()) & 1;
}
