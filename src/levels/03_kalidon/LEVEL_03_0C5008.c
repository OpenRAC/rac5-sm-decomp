/* LEVEL_03:0x0C5008 -- a 16-byte vector written to a fixed global slot. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern Vec4 D_00346898;

void func(Vec4 *src)
{
    D_00346898 = *src;
}
