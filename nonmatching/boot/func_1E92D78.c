/*
 * USA boot candidate at 0x01E92D78; anonymous body extent 108 bytes.
 * This C body compared exactly in a local SN link using reconstructed GNU
 * pinned and gnu-ee-trial compilers with -O2 -G0. Those tools are not a
 * qualified project toolchain; this is not an accepted match. The current
 * gate rejects anonymous bodies followed by a zero word. Reopen when
 * the gate supports a reviewed anonymous extent and preserves its trailing
 * word, without weakening boundary checks. Promotion requires the qualified
 * complete boot gate and semantic boundary/ABI review.
 *
 * This callback-shaped reconstruction updates observed positional-record
 * fields. `long` is a measured ABI carrier; source spelling and the indirect
 * dispatcher contract are not established. The callback data conversion
 * and result behavior remain provisional.
 */
typedef struct SND_Positional {
    int state;
    char _pad04[0x04];
    int result;
    char _pad0C[0x10];
    unsigned char field1C;
    unsigned char field1D;
    unsigned char field1E;
    unsigned char field1F;
    char _pad20[0x38];
} SND_Positional;

extern void func_1E92AB0(SND_Positional *sound);

void func_1E92D78(int result, long data)
{
    SND_Positional *sound = (SND_Positional *)data;
    int previous;

    if (sound != 0) {
        previous = sound->state;
        sound->state = 3;
        sound->result = result;
        if (result == 0) {
            func_1E92AB0(sound);
        } else if (previous == 6) {
            sound->field1E = 1;
        } else if (sound->field1C != 0) {
            sound->field1D = 1;
        }
    }
}
