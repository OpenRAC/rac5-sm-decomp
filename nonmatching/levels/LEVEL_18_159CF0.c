/* LEVEL_18.REL:0x159CF0: reviewed 92-byte candidate.
 * Returns one only when the owner ratio is at least 150 and the helper and
 * flag checks pass.
 * pinned C with gnu-ee-trial links 92/92 bytes; first differs at +60 (4
 * words).
 * The sense of the final flag test differs, with the zero result in the delay
 * slot in the retail.
 * Retry: Recover the boolean result form of the final test.
 * No matching credit.
 */
int func_159C10(void *o);

struct Sub {
    unsigned char pad000[0x168];
    float f168;
    unsigned char pad16C[0x18B - 0x16C];
    unsigned char b18B;
};

struct Obj {
    unsigned char pad00[0x58];
    struct Sub *p58;
};

int func_159CF0(struct Obj *o)
{
    struct Sub *s;

    s = o->p58;
    if (s->f168 < 150.0f) {
        return 0;
    }
    if (func_159C10(o) != 0) {
        if (s->b18B == 0) {
            return 1;
        }
    }
    return 0;
}
