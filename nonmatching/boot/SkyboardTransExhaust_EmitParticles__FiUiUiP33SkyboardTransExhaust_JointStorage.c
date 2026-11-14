/* SkyboardTransExhaust_EmitParticles__FiUiUiP33SkyboardTransExhaust_JointStora
 * ge 0x01E72450 (14 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[0x68];
    void *joint;
    unsigned char pad2[4];
} tEnginePart;

extern tEnginePart D_01EF0C60[];
extern void SkyboardTransExhaust_EmitParticles__FiUiUiff(int a, unsigned int b, unsigned int c, float x, float y);

void SkyboardTransExhaust_EmitParticles__FiUiUiP33SkyboardTransExhaust_JointStorage(int a, unsigned int b, unsigned int count, void *storage) {
    tEnginePart *part = &D_01EF0C60[b];
    unsigned int i;
    unsigned char *joint;

    if (storage != 0) {
        if (count != 0) {
            joint = (unsigned char *)storage + 8;
            for (i = 0; i < count; i++) {
                part->joint = joint;
                SkyboardTransExhaust_EmitParticles__FiUiUiff(a, b, 1, 0.0f, 0.0f);
                joint += 0x48;
            }
        }
    }
}
