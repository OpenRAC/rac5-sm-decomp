/* USA LEVEL_01.REL:0x024920, 276-byte candidate (21 November 2026).
 * Measured pinned: 27 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Cur {
    char pad00[0x44];
    unsigned int count;
} Cur;

typedef struct Cap {
    char pad00[0x20];
    unsigned int capacity;
} Cap;

extern int func_024728(void *o);
extern Cur *func_024628(void *o, int k);
extern int func_0252D8(void *o, int k);
extern Cap *func_0246D0(void *o, int a, int k);

float func_024920(void *o, int k)
{
    Cur *cur;
    Cap *cap;
    float r;
    unsigned int cv;
    unsigned int nv;
    float n;
    float d;

    if (func_024728(o) == 0) {
        return 0.0f;
    }
    cur = func_024628(o, k);
    cap = func_0246D0(o, func_0252D8(o, k), k);
    cv = cap->capacity;
    nv = cur->count;
    n = (float)nv;
    d = (float)cv;
    r = (n + n) / (d + d + 9.999999974752427e-07f);
    if (r > 1.0f) {
        r = 1.0f;
    }
    return r;
}
