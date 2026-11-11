/* LEVEL_23:0x173ED0 -- placement copy of LEVEL_01_18D750.c: when the global switch is on and the counter is not positive, bumps the counter and starts the effect for the first word of the object's linked record. */
extern unsigned char D_001C956C;
extern int D_001DBC34;
extern void func_0292D0(unsigned int value);

void func_173ED0(char *o)
{
    if (D_001C956C != 0) {
        if (D_001DBC34 <= 0) {
            D_001DBC34 = D_001DBC34 + 1;
            func_0292D0(**(int **)(o + 0x54));
        }
    }
}
