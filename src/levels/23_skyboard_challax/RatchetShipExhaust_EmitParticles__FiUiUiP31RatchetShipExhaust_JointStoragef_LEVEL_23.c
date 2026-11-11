/* LEVEL_23:0x0FEE28 -- placement copy of LEVEL_01_10C5C0.c: stores a rolling record pointer for each of N entries and queues one helper call per entry. */

typedef struct {
    char pad_00[8];
    char f_08[0x40];
} Elem10C5C0;

extern char D_001D9E70[];
extern void func_0FEEF0(char *a, int b, int c, float d, float e, float f);

void RatchetShipExhaust_EmitParticles__FiUiUiP31RatchetShipExhaust_JointStoragef(char *a0, int a1, unsigned int a2, Elem10C5C0 *a3, float f12)
{
    char *base = D_001D9E70 + (a1 << 7);
    unsigned int i;

    if (a3 == 0) {
        return;
    }
    if (a2 == 0) {
        return;
    }
    for (i = 0; i < a2; i++) {
        *(char **)(base + 0x68) = a3[i].f_08;
        func_0FEEF0(a0, a1, 1, 0.0f, 0.0f, f12);
    }
}
