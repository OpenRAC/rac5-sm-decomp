/* LEVEL_08.REL:0x2032D0: reviewed 192-byte candidate, held for ABI review.
 * Resolves a table entry and, when one was found, rescales a random offset
 * into the record.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 192/192 bytes and is byte-
 * exact at this USA placement, but the prototypes disagree.
 * It declares func_13A208 returning void with (pointer, int, pointer, float,
 * float, float), but the accepted LEVEL_01_128F50.c defines it returning void
 * with (pointer, pointer, pointer, float, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *func_0AA518(void *a, void *b, int c);
extern void func_13A208(char *obj, int a, char *b, float c, float d, float e);
extern int rand(void);
extern float D_003EB0BC;
extern char D_003EB180[];

void func_2032D0(char *a0, float fx)
{
    int slot[2];
    char *s1;
    float base;
    float r;

    s1 = func_0AA518(slot, D_003EB180, 1);
    if (slot[0] != 0) {
        r = 38.0f;
        base = D_003EB0BC / fx;
        func_13A208(s1, 0, a0, base, base, base);
        *(float *)(s1 + 0x30) = (float)rand() * 4.656612873077393e-10f * 2.0f + r;
    }
}
