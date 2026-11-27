/* USA LEVEL_01:104D78, 168-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 168 bytes: 11 differing words; first difference +0x14. No matching credit.
 * Remaining issue: loop register allocation: cur = p; stop = p + 4; ... p = stop form reaches
 * the retail 168 B length and instruction set (21 -> 11 words); retail keeps next in a2 with t
 * reusing the source register and a stop copy in v1, ours folds next into src += 0x40 and keeps
 * t in v0; 64 statement orders of cur/stop/next/t/p=stop tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x104D78 -- applies a chain of 2-D rotations: rotates the first pair of the vector by the leading cos/sin pair, then rotates each following group of two pairs by the matching transform pairs of the source rows. */

void func_104D78(float *v, char *src, int n)
{
    float *p;
    float *end;
    float *stop;
    float *t;
    float *next;
    float *cur;
    float a0 = v[0];
    float a1 = v[1];
    float c = v[2];
    float s = v[3];

    v[0] = c * a0 - s * a1;
    v[1] = c * a1 + s * a0;
    p = v + 4;
    end = p + n * 4;
    src += 0x18;
    do {
        cur = p;
        stop = p + 4;
        next = (float *)(src + 0x40);
        t = (float *)(src + 0x30);
        do {
            float x = t[0];
            float y = t[1];
            float p0 = cur[0];
            float p1 = cur[1];
            cur[0] = x * p0 - y * p1;
            cur[1] = x * p1 + y * p0;
            cur += 2;
            t += 2;
        } while (cur != stop);
        p = stop;
        src = (char *)next;
    } while (p != end);
}
