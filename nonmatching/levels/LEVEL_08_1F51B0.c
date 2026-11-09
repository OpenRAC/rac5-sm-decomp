/* LEVEL_08.REL:0x1F51B0: reviewed 164-byte candidate, held for ABI review.
 * Derives a sine-like value from cosf and sqrtf, then calls a helper with two
 * output pointers.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 164/164 bytes and is byte-
 * exact at this USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, float), but the
 * accepted caller LEVEL_08_1F5048.c declares it returning int with (int,
 * float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float cosf(float x);
extern float sqrtf(float x);
extern void func_13A840(void *a, void *b, void *c, void *d, float e, float f);

void func_1F51B0(char *o, float x)
{
    float c;
    float s;

    c = cosf(x);
    s = sqrtf(1.0f - c * c);
    if (x < 0.0f) {
        s = -s;
    }
    func_13A840(o + 0x10, o + 0x20, o + 0x10, o + 0x20, s, c);
}
