/* USA LEVEL_01.REL:0x001740. Retained C hypothesis, not a match.
 * Pinned GNU EE links 260 bytes against 260 retail bytes; first difference
 * at body byte 9. All 20 structural placements were measured separately. */
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void func_123068(void *dst, const void *src);
extern void *func_001088(int slot, const void *metadata, void *record);
extern char D_00001570[];

void *func_001740(int slot, unsigned int field_a, unsigned int field_b,
                  const char *src, char *dst, float scale)
{
    const float *src_vec = (const float *)(src + 0x30);
    float *dst_vec = (float *)(dst + 0x50);

    memcpy(dst, src, 64);
    *(unsigned int *)(dst + 0x48) = field_a;
    *(unsigned int *)(dst + 0x4c) = field_b;
    *(float *)(dst + 0x44) = scale;
    *(float *)(dst + 0x40) = 1.0f;
    dst_vec[0] = src_vec[0];
    dst_vec[1] = src_vec[1];
    dst_vec[2] = src_vec[2];
    func_123068(dst + 0x5c, src);
    return func_001088(slot, D_00001570, dst);
}
