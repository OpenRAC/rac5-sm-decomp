/*
 * USA boot candidate at 0x01E92E60; anonymous body extent 52 bytes.
 * This C body compared exactly in a local SN link using reconstructed GNU
 * pinned and gnu-ee-trial compilers with -O2 -G0. Those tools are not a
 * qualified project toolchain; this is not an accepted match. The current
 * gate rejects anonymous bodies followed by a zero word. Reopen when
 * the gate supports a reviewed anonymous extent and preserves its trailing
 * word, without weakening boundary checks. Promotion requires the qualified
 * complete boot gate and semantic boundary/ABI review.
 *
 * This callback-shaped reconstruction updates observed ATRAC-instance fields.
 * `long` is a measured ABI carrier; source spelling and the indirect
 * dispatcher contract are not established. The callback data conversion
 * and result behavior remain provisional.
 */
typedef struct {
    char _pad00[0x70];
    int playing;
    int field74;
    unsigned char field78;
    unsigned char field79;
    unsigned char field7A;
    unsigned char field7B;
} ATRACInstance;

void func_1E92E60(int result, long data)
{
    ATRACInstance *instance = (ATRACInstance *)data;

    if (instance != 0) {
        if (result == 0) {
            instance->playing = 0;
            instance->field7A = 0;
            instance->field79 = 0;
            instance->field78 = 0;
        }
        instance->field74 = 0;
    }
}
