/* LEVEL_01:0x0D82F8 -- a 16-byte vector stored in the frame at +0x54. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

void func(unsigned char *frame, Vec4 *src)
{
    *(Vec4 *)(frame + 0x54) = *src;
}
