/* LEVEL_01.REL:0x08FF60: Ghidra body 144 bytes.
 * Pinned pure C links 148 bytes and first differs at +8.
 * Recheck average coordinate loads and loop scheduling. No matching credit.
 */
void func_08FF60(float *out, const char *source, int count)
{
    float *end = out + count * 4;
    for (; out != end; out += 4) {
        float x;
        float y;
        float z;
        out[0] = (*(const float *)(source + 0x20) +
                  *(const float *)(source + 0x50) +
                  *(const float *)(source + 0x80)) / 3.0f;
        out[1] = (*(const float *)(source + 0x24) +
                  *(const float *)(source + 0x54) +
                  *(const float *)(source + 0x84)) / 3.0f;
        x = *(const float *)(source + 0x28);
        y = *(const float *)(source + 0x58);
        z = *(const float *)(source + 0x88);
        out[3] = 1.0f;
        out[2] = (x + y + z) / 3.0f;
        source += 0x90;
    }
}
