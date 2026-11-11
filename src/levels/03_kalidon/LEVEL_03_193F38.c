/* LEVEL_03.REL @ 0x193F38 — 40 octets, lwc1/swc1 */
typedef struct {
    char pad3C[0x3C];
    char *f3C;
    char *f40;
} Inner;

void func_193F38(char *a0)
{
    Inner *p = *(Inner **)(a0 + 0x54);
    float f = *(float *)(p->f3C + 0x34) - 0.009999999776482582f;

    *(float *)(p->f40 + 0x34) = f;
}
