/* LEVEL_03.REL:0x04BE48: reviewed 168-byte candidate, held for ABI review.
 * Resets a state record to mode 0x4D, stores three floats, then calls two
 * helpers.
 * pinned C with gnu-ee-trial links 168/168 bytes and is byte-exact at this and
 * 6 other USA placements, but the prototypes disagree.
 * It declares func_03A300 returning void with (pointer, int), but the accepted
 * LEVEL_03_03A300.c defines it returning void with (long long, long long).
 * It declares func_03A3F0 returning void with (pointer, float), but the
 * accepted LEVEL_03_03A3F0.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0024FFC0[];
extern void func_03D298(char *o);
extern void func_03A300(char *o, int a);
extern void func_03A3F0(char *o, float f);
extern void func_04A168(char *a, int b);
extern void func_002C78(int a);

void func_04BE48(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_03D298(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_03A300(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_03A3F0(o, 4.0f);
    func_04A168(D_0024FFC0, q);
    func_002C78(0);
}
