/*
 * USA boot candidate at 0x01E932D8; anonymous body extent 56 bytes.
 * This C body compared exactly in a local SN link using reconstructed GNU
 * pinned and gnu-ee-trial compilers with -O2 -G0. Those tools are not a
 * qualified project toolchain; this is not an accepted match. Promotion
 * requires the qualified complete boot gate and semantic boundary review.
 *
 * The observed initializer conditionally writes four floats in the sound
 * translation unit's data.
 */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} D_01FD1880_t;

extern D_01FD1880_t D_01FD1880;

void func_1E932D8(int initialize, int priority)
{
    if (priority == 0xFFFF && initialize != 0) {
        D_01FD1880.x = 0.0f;
        D_01FD1880.w = 1.0f;
        D_01FD1880.z = 0.0f;
        D_01FD1880.y = 0.0f;
    }
}
