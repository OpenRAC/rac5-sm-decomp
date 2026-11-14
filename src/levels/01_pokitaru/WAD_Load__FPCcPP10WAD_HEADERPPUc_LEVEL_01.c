/* LEVEL_01:0x129D88 -- keeps retrying the helper with the same arguments until it succeeds, then returns 1. */
extern int func_129968(int a0, int a1, int a2, int a3);

int WAD_Load__FPCcPP10WAD_HEADERPPUc(int a0, int a1, int a2)
{
    int ok;

    do {
        ok = func_129968(a0, a1, a2, 0);
    } while (ok == 0);
    return 1;
}
