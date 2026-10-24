/* LEVEL_05.REL @ 0x198A48 — 76 octets, lwc1 */
typedef struct {
    char pad18[0x18];
    float f18;
} Inner;

void func_199018(char *a0, int a1);

void func_198A48(char *a0)
{
    Inner *p = *(Inner **)(a0 + 0x54);
    int *q = *(int **)(a0 + 0x58);
    float f = p->f18 - 1.0f;
    int v = q[0];

    p->f18 = f;
    if (f <= 0.0f)
        func_199018(a0, v);
}
