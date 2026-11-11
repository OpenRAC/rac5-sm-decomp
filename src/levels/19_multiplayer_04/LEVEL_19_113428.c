/* LEVEL_19:0x113428 -- placement copy of LEVEL_16_112C80.c: returns one when a probe fails and a scan of a table finds a record whose tag is below five, otherwise zero. */

int func_024C08(int a0, int a1);
int func_118028(void);

int func_113428(void)
{
    char *base;
    char *p;
    char *end;

    if (func_024C08(0, 0xFF) != 0) {
        return 1;
    }
    base = (char *)func_118028();
    if (base != 0) {
        goto scan;
    }
none:
    return 0;
scan:
    p = base + 0xC;
    end = base + 0x78;
    do {
        if (*(unsigned int *)p < 5) {
            goto none;
        }
        p += 0x24;
    } while (p < end);
    return 1;
}
