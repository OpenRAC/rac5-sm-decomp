/* LEVEL_21:0x03FA78 -- placement copy of LEVEL_01_04E7E8.c: when the pending state differs from the stored one, starts the effect for state 2 (clearing its marker) or state 4, then stores the state compactly. */
extern void func_03EDA8(float, float, void *, int, int, int);

void func_03FA78(char *record)
{
    unsigned int state = *(unsigned int *)(record + 0x53c);
    unsigned short compact;

    if (*(unsigned short *)(record + 0x108) == state)
        return;
    if (state == 3)
        goto cleanup;
    if (state < 4) {
        if (state == 2)
            goto low_state;
        goto cleanup;
    }
    if (state == 4)
        goto high_state;
    goto cleanup;
low_state:
    func_03EDA8(0.20000000298023224f, 0.0f, record, 0x17, 0, 1);
    *(unsigned int *)(record + 0x550) = 0;
    goto cleanup;
high_state:
    func_03EDA8(0.20000000298023224f, 0.0f, record, 0x16, 0, 1);
cleanup:
    compact = *(unsigned short *)(record + 0x53c);
    *(unsigned short *)(record + 0x108) = compact;
    *(unsigned short *)(record + 0x10a) = compact;
}
