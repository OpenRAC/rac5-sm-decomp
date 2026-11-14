/* LEVEL_21:0x0EDC08 -- placement copy of LEVEL_01_129D88.c: keeps retrying the helper with the same arguments until it succeeds, then returns 1. */
extern int func_0ED7E8(int a0, int a1, int a2, int a3);

int WAD_Load__FPCcPP10WAD_HEADERPPUc(int a0, int a1, int a2)
{
    int ok;

    do {
        ok = func_0ED7E8(a0, a1, a2, 0);
    } while (ok == 0);
    return 1;
}
