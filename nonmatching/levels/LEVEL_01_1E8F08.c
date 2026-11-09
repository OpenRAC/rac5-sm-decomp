/* LEVEL_01.REL:0x1E8F08: reviewed 100-byte candidate, held for ABI review.
 * Walks two 24-byte slots, calling a helper with each slot and a table word.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_1E8608 returning void with (pointer, int, int), but the
 * accepted LEVEL_01_1E8608.c defines it returning void with (pointer, long
 * long, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct A1E8F08 {
    char pad0[0x18];
};

struct E1E8F08 {
    int f00;
    char pad04[0x78];
};

struct B1E8F08 {
    char pad0[0x120];
    struct E1E8F08 e[1];
};

extern void func_1E8608(struct A1E8F08 *p, int v, int c);

void func_1E8F08(struct A1E8F08 *p, struct B1E8F08 *b, int c)
{
    int cur;
    int end;
    struct E1E8F08 *q;

    cur = (int)p;
    end = cur + 0x30;
    q = b->e;
    do {
        func_1E8608((struct A1E8F08 *)cur, q->f00, c);
        cur += 0x18;
        q++;
    } while (cur < end);
}
