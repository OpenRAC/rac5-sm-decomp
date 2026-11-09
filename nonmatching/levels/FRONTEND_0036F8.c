/* FRONTEND.REL:0x0036F8: reviewed 252-byte candidate, held for ABI review.
 * Copies the first 25 slot descriptors into the global slot table.
 * pinned C with gnu-ee-trial links 252/252 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It declares func_003C90 returning pointer with (int, int), but the accepted
 * FRONTEND_003C90.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x3C];
    int v3C;
    int v40;
    int v44;
    char pad48[4];
    unsigned char b4C;
    unsigned char b4D;
    unsigned char b4E;
    unsigned char b4F;
    unsigned char b50;
    unsigned char b51;
    char pad52[2];
    int v54;
} Src;

extern unsigned char *D_00027E9C;
extern Src *func_003C90(int i, int j);

void func_0036F8(void)
{
    unsigned int i;
    int off;
    Src *s;

    off = 0;
    i = 0;
    do {
        s = func_003C90(i, -1);
        i++;
        if (s) {
            *(int *)(D_00027E9C + off + 0x600) = s->v40;
            *(int *)(D_00027E9C + off + 0x604) = s->v44;
            *(int *)(D_00027E9C + off + 0x5FC) = s->v3C;
            *(D_00027E9C + off + 0x608) = s->b4C;
            *(D_00027E9C + off + 0x60B) = s->b4F;
            *(D_00027E9C + off + 0x609) = s->b4D;
            *(D_00027E9C + off + 0x60C) = s->b50;
            *(D_00027E9C + off + 0x60A) = s->b4E;
            *(D_00027E9C + off + 0x60D) = s->b51;
            *(int *)(D_00027E9C + off + 0x610) = s->v54;
        }
        off += 0x18;
    } while (i < 25);
}
