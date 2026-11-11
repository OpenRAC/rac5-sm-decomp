/* LEVEL_16:0x0156E0 -- writes the caller's matrix into slot number
   `index' of the level's matrix table (the table is at 0x1DE5F0, one matrix
   is sixty-four bytes); only the eight first slots are used. */
typedef struct {
    float m[16];
} Mat4;

extern Mat4 D_001DE5F0[];

void func_0156E0(unsigned int index, Mat4 *src)
{
    if (index < 8)
        D_001DE5F0[index] = *src;
}
