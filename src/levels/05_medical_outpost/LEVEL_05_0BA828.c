/* LEVEL_05:0x0BA828 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0031490C;
extern int func_019E00(int value);

int func_0BA828(void)
{
    return func_019E00(6) ? D_0031490C : 0;
}
