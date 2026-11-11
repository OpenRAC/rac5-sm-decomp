/* LEVEL_18:0x159C68 -- calls a helper, then copies a four-float vector from offset 0x20 of the first block into the output. */

void func_103040(void *a0, void *a1, void *a2);
extern unsigned char D_001D6388[];

void func_159C68(unsigned char *a0, void *a1, float *a2)
{
    float *src;

    func_103040(a1, a0, D_001D6388);
    src = (float *)(a0 + 0x20);
    a2[0] = src[0];
    a2[1] = src[1];
    a2[2] = src[2];
    a2[3] = src[3];
}
