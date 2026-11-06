/* LEVEL_01.REL:0x08CD10, bounded 180-byte candidate.
 * Isolated pinned C object: 148 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail keeps two pipeline nops after the mult and three daddu copies of the same record base; GCC coalesces them and links 148/156 bytes against 180. Reopen with six typed local pointers assigned at different times or a multiplication-latency model that emits the nops.
 */
extern unsigned int D_001F62E0;
extern char D_0023F210[];

struct vec3 {
    int x;
    int y;
    int z;
};

struct rec {
    struct vec3 v;
    int pad;
    int tag;
    float angle;
    float scaled;
    float squared;
    float inverse;
    float half;
};

void func_08CD10(struct vec3 *src, int tag, float angle)
{
    unsigned int i = D_001F62E0;

    if (i < 0x80) {
        struct rec *rec = (struct rec *)(D_0023F210 + i * 40);
        struct rec *out = (struct rec *)(D_0023F210 + 40);
        float scaled = angle * 5.0f;

        rec->v = *src;
        D_001F62E0 = i * 40 + 1;
        out->tag = tag;
        out->angle = angle;
        out->scaled = scaled;
        out->squared = scaled * scaled;
        out->inverse = 2.0f / angle;
        out->half = angle * 0.5f;
    }
}
