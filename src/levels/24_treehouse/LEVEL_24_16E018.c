/* LEVEL_24:0x16E018 -- placement copy of LEVEL_01_18D750.c: when the global switch is on and the counter is not positive, bumps the counter and starts the effect for the first word of the object's linked record. */
extern unsigned char D_001C6DEC;
extern int D_001D968C;
extern void func_028CA0(unsigned int value);

void func_16E018(char *o)
{
    if (D_001C6DEC != 0) {
        if (D_001D968C <= 0) {
            D_001D968C = D_001D968C + 1;
            func_028CA0(**(int **)(o + 0x54));
        }
    }
}
