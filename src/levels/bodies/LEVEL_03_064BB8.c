extern void func_04BCD0(float, float, void *, int, int, int);

void func_064BB8(char *record)
{
    unsigned int state = *(unsigned int *)(record + 0xb78);
    unsigned short compact;
    if (state == 0)
        return;
    if (state == 3)
        goto active;
    if (state < 4) {
        if (state == 2)
            goto active;
        goto cleanup;
    }
    if (state == 4)
        goto high_state;
    goto cleanup;
active:
    func_04BCD0(0.1f, 0.0f, record, 0x3b, 0, 1);
    goto cleanup;
high_state:
    func_04BCD0(0.1f, 0.0f, record, 0x3b, 0, 1);
cleanup:
    compact = *(unsigned short *)(record + 0xb78);
    *(unsigned short *)(record + 0x108) = compact;
    *(unsigned int *)(record + 0xb78) = 0;
    *(unsigned short *)(record + 0x10a) = compact;
    record[0xbc8] = 0;
}
