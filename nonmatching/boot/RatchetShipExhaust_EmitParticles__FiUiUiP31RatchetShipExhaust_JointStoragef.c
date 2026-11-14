/* RatchetShipExhaust_EmitParticles__FiUiUiP31RatchetShipExhaust_JointStoragef
 * 0x01E6E680 (14 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x4C.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[0x68];
    void *joint;
    unsigned char pad2[0x14];
} tEnginePart;

extern tEnginePart EngineParts[];
extern void RatchetShipExhaust_EmitParticles__FiUiUifff(int a, unsigned int b, unsigned int c, float x, float y, float z);

void RatchetShipExhaust_EmitParticles__FiUiUiP31RatchetShipExhaust_JointStoragef(int a, unsigned int b, unsigned int count, void *storage, float f) {
    tEnginePart *part = &EngineParts[b];
    unsigned int i;
    unsigned char *joint;

    if (storage != 0) {
        if (count != 0) {
            joint = (unsigned char *)storage + 8;
            for (i = 0; i < count; i++) {
                part->joint = joint;
                RatchetShipExhaust_EmitParticles__FiUiUifff(a, b, 1, 0.0f, 0.0f, f);
                joint += 0x48;
            }
        }
    }
}
