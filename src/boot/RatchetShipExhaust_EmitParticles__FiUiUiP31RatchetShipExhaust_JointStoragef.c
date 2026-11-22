/* boot:0x01E6E680 -- stores a rolling record pointer for each of N entries and queues one helper call per entry. Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/RatchetShipExhaust_EmitParticles__FiUiUiP31RatchetShipExhaust_JointStoragef_LEVEL_01.c (RatchetShipExhaust_EmitParticles__FiUiUiP31RatchetShipExhaust_JointStoragef_LEVEL_01). */

typedef struct {
    char pad_00[8];
    char f_08[0x40];
} Elem10C5C0;

extern char EngineParts[];
extern void RatchetShipExhaust_EmitParticles__FiUiUifff(char *a, int b, int c, float d, float e, float f);

void RatchetShipExhaust_EmitParticles__FiUiUiP31RatchetShipExhaust_JointStoragef(char *a0, int a1, unsigned int a2, Elem10C5C0 *a3, float f12)
{
    char *base = EngineParts + (a1 << 7);
    unsigned int i;

    if (a3 == 0) {
        return;
    }
    if (a2 == 0) {
        return;
    }
    for (i = 0; i < a2; i++) {
        *(char **)(base + 0x68) = a3[i].f_08;
        RatchetShipExhaust_EmitParticles__FiUiUifff(a0, a1, 1, 0.0f, 0.0f, f12);
    }
}
