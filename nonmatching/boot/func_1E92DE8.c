/*
 * USA boot candidate at 0x01E92DE8; anonymous body extent 96 bytes.
 * This C body compared exactly in a local SN link using reconstructed GNU
 * pinned and gnu-ee-trial compilers with -O2 -G0. Those tools are not a
 * qualified project toolchain; this is not an accepted match. Promotion
 * requires the qualified complete boot gate and semantic boundary/ABI review.
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
    char _pad0C[0x04];
    struct SND_Positional **link;
    char _pad14[0x08];
    unsigned char field1C;
    unsigned char field1D;
    unsigned char field1E;
    unsigned char field1F;
    char _pad20[0x38];
} SND_Positional;

extern int SND_IsPlaying__FPC14SND_Positional(const SND_Positional *sound);
extern void func_1E92AB0(SND_Positional *sound);

void func_1E92DE8(int result, long data)
{
    SND_Positional *sound = (SND_Positional *)data;

    if (sound != 0) {
        sound->result = result;
        sound->field1F = 0;
        if (result == 0) {
            if (SND_IsPlaying__FPC14SND_Positional(sound)) {
                if (sound->link != 0) {
                    *sound->link = 0;
                    sound->link = 0;
                }
                func_1E92AB0(sound);
            }
        }
    }
}
