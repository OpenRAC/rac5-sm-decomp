/* USA LEVEL_03.REL:0x1A2EB0, 180-byte candidate (14 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x78.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
int func_01F118(char *a0, char *a1, unsigned char a2, char *a3);
int func_111788(char *a0, char *a1, char *a2);

typedef void (*handler_t)(char *, int, int, char *, char *, char *, float);

void func_1A2EB0(char *obj, char *a1)
{
    char *e;
    char *p;
    char *tab;
    char *ent;
    char *r;
    int res;

    e = *(char **)(*(char **)(obj + 0x58) + 0x60);
    if (e == 0) {
        return;
    }
    p = *(char **)(e + 0x40);
    tab = *(char **)(p + 4);
    ent = tab + *(unsigned char *)(e + 0x44) * 0x34;
    r = *(char **)(ent + 0x10);
    if (r != 0) {
        res = func_01F118(a1, *(char **)(r + 4), *(unsigned char *)r, e);
    } else {
        res = func_111788(a1, *(char **)(ent + 0x14), e);
    }
    if ((res & 0xFF) == 0) {
        return;
    }
    (*(handler_t *)(*(char **)(e + 0x40) + 0x20))(e, 0, 3, obj + 0x30, obj + 0x20, obj, 1.0f);
}
