/* LEVEL_01.REL:0x02B770, bounded 200-byte candidate.
 * Isolated pinned C object: 188 bytes; first linked
 * difference at body byte +13. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern float floorf(float);
extern void func_0FF2B8(float, float, int, void *, int);
extern int D_00231888;
extern char D_001F44F8[];
extern char D_00231750[];

void func_0002B770(float param, float *vec)
{
    struct {
        float a;
        float b;
        float c;
        float d;
        float e;
        float f;
        float g;
        void *p;
        void *q;
    } s;
    float n;

    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    s.p = D_001F44F8;
    s.q = D_00231750;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_0FF2B8(0.7518797f, 0.7518797f, D_00231888, &s, (int)n);
    }
}
