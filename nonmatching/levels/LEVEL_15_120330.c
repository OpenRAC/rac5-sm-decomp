/* LEVEL_15.REL:0x120330: reviewed 164-byte candidate, held for ABI review.
 * Store the table link and the vector in the record.
 * pinned C with gnu-ee-trial links 164/164 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_080488 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float f[6];
} V6;

typedef struct {
    char pad00[0x1C];
    void *link;
    V6 v;
} Record;

typedef struct {
    char pad[176];
} Entry;

extern Entry D_2F2B80[];
extern char D_170B18[];

extern void func_080488(void *, void *);
extern void func_1203D8(void *, void *);

void func_120330(Record *dst, int index, V6 *src, void *arg)
{
    func_080488(dst, D_170B18);
    dst->link = &D_2F2B80[index];
    dst->v = *src;
    func_1203D8(dst, arg);
}
