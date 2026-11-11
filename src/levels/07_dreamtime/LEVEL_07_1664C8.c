/* LEVEL_07:0x1664C8 -- selects the slot pointer for a new entry, calling a helper when it changes. */

extern int func_165B88(unsigned char *o, unsigned int x);

int func_1664C8(unsigned char *a0, unsigned char *a1, int a2)
{
    unsigned char *v;
    unsigned char *a3;
    unsigned char *t8;

    v = *(unsigned char **)(a0 + 0x58);
    a3 = *(unsigned char **)(v + 0xC4);
    t8 = *(unsigned char **)(v + 0xC8);
    if (a2 != 0) {
        *(unsigned char **)(v + 0xC8) = 0;
    } else if (a3 == 0) {
        *(unsigned char **)(v + 0xC4) = a1;
        goto notify;
    } else if (!(*(unsigned int *)(a1 + 0x14) > *(unsigned int *)(a3 + 0x14))) {
        goto keep;
    }
    *(unsigned char **)(v + 0xC4) = a1;
notify:
    func_165B88(a0, *(unsigned int *)(a1 + 0x18));
    return 1;
keep:
    if (t8 == 0) {
        if (a1 != a3) {
            *(unsigned char **)(v + 0xC8) = a1;
        }
        return 0;
    }
    if (!(*(unsigned int *)(a1 + 0x14) < *(unsigned int *)(t8 + 0x14))) {
        *(unsigned char **)(v + 0xC8) = a1;
    }
    return 0;
}
