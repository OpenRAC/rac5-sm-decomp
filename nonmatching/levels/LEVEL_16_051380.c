/* LEVEL_16.REL:0x051380: reviewed 196-byte candidate, held for ABI review.
 * LEVEL_16:0x51380 -- resets a two-step blend record and accumulates a sampled
 * pair into it.
 * pinned C with gnu-ee-trial links 196/196 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_04FB80 returning float with (int, int, float), but the
 * accepted LEVEL_01_0570C8.c defines it returning float with (pointer, int,
 * float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_014910(void *a, int b, char *c, int *d, float *e, int f, int g);
extern float func_04FB80(int a, int b, float c);

void func_051380(char *a0, int a1)
{
    unsigned char buf[16];
    int i;
    float f;
    float add;
    int *q;

    *(int *)(a0 + 0xCC4) = 8;
    *(float *)(a0 + 0xCB8) = 0.13333334028720856f;
    *(float *)(a0 + 0xCBC) = 0.02222222462296486f;
    *(int *)(a0 + 0xCD4) = 0;
    q = (int *)(a0 + 0xC98);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    f = *(float *)(a0 + 0xC8C);
    i = *(int *)(a0 + 0xC88);
    if (func_014910(buf, a1, a0 + 0x30, &i, &f, 0, 0) != 0) {
        add = func_04FB80(a1, i, 0.0f);
        *(float *)(a0 + 0xC8C) = f;
        *(int *)(a0 + 0xC88) = i;
        *(float *)(a0 + 0xC90) = add;
        *(float *)(a0 + 0xC94) = add + f;
    }
}
