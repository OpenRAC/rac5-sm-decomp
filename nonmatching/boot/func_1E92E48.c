/*
 * USA boot candidate at 0x01E92E48; anonymous body extent 24 bytes.
 * This C body compared exactly in a local SN link using reconstructed GNU
 * pinned and gnu-ee-trial compilers with -O2 -G0. Those tools are not a
 * qualified project toolchain; this is not an accepted match. Promotion
 * requires the qualified complete boot gate and semantic boundary/ABI review.
 *
 * This callback-shaped reconstruction stores the observed result word.
 * `long` is a measured ABI carrier; source spelling and the indirect
 * dispatcher contract are not established. The callback data conversion
 * remains provisional.
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

void func_1E92E48(int result, long data)
{
    ATRACInstance *instance = (ATRACInstance *)data;

    if (instance != 0)
        instance->playing = result;
}
