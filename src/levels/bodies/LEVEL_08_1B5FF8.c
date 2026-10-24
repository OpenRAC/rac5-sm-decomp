/* LEVEL_08.REL @ 0x1B5FF8 — 48 octets, swc1 */
extern char D_003E7CD8[];
void func_1B5FF8(float f12)
{
    char *base = D_003E7CD8;
    float *p = (float *)(base + 0xE8);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        *p = f12;
        p = (float *)((char *)p + 0xF0);
    }
}
