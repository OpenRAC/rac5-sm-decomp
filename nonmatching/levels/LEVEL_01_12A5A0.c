/* LEVEL_01.REL:0x12A5A0: reviewed 316-byte candidate, held for ABI review.
 * Converts the offsets in a loaded resource header into pointers once and
 * returns its data block.
 * pinned C with gnu-ee-trial links 316/316 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning pointer with (pointer), but the accepted
 * caller LEVEL_01_12B090.c declares it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Ent_12A5A0 {
    char pad[0x18];
};

struct Tab_12A5A0 {
    struct Ent_12A5A0 *ents;
    int count;
};

struct Sec_12A5A0 {
    int a;
    int b;
    int c;
};

struct Hdr_12A5A0 {
    char pad0[0x78];
    int ready;
    char *data;
    char pad1[0x40];
    char blob[16];
};

extern char D_00218028[];
extern struct Hdr_12A5A0 *func_12A4B8(void *a0);
extern int memcmp(const void *a, const void *b, unsigned int n);

char *func_12A5A0(void *a0)
{
    struct Hdr_12A5A0 *hdr;
    char *blob;
    struct Tab_12A5A0 *tab;
    struct Sec_12A5A0 *secB;
    struct Sec_12A5A0 *secC;
    int offA;
    int offB;
    int offC;
    struct Ent_12A5A0 *e;
    struct Ent_12A5A0 *end;

    if (a0 == 0) {
        return 0;
    }
    hdr = func_12A4B8(a0);
    if (hdr == 0) {
        return 0;
    }
    if (hdr->ready == 0) {
        blob = hdr->blob;
        if (memcmp(blob, D_00218028, 4) != 0) {
            return 0;
        }
        offA = *(int *)(blob + 4);
        if (offA != 0) {
            tab = (struct Tab_12A5A0 *)(offA + (int)blob);
            *(struct Tab_12A5A0 **)(blob + 4) = tab;
            tab->ents = (struct Ent_12A5A0 *)((char *)tab->ents + (int)blob);
            e = tab->ents;
            end = e + tab->count;
            for (; e != end; e++) {
            }
        }
        offB = *(int *)(blob + 8);
        if (offB != 0) {
            secB = (struct Sec_12A5A0 *)(offB + (int)blob);
            *(struct Sec_12A5A0 **)(blob + 8) = secB;
            secB->a += (int)blob;
            secB->b += (int)blob;
            secB->c += (int)blob;
        }
        offC = *(int *)(blob + 12);
        if (offC != 0) {
            secC = (struct Sec_12A5A0 *)(offC + (int)blob);
            *(struct Sec_12A5A0 **)(blob + 12) = secC;
            secC->a += (int)blob;
            secC->b += (int)blob;
            secC->c += (int)blob;
        }
        hdr->data = blob;
        hdr->ready = 1;
    }
    return hdr->data;
}
