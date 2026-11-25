/* LEVEL_03:0x1A2EB0 -- dispatches to a resolver for an entry record, then calls its vtable-style handler when the result is set. */

int func_01F118(float f, char *a0, char *a1, int a2, char *a3);
int func_111788(float f, char *a0, char *a1, char *a2);

typedef int (*handler_t)(char *, int, int, char *, char *, char *, float);

void func_1A2EB0(float f, char *obj, char *a1)
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
        res = func_01F118(f, a1, *(char **)(r + 4), *(unsigned char *)r, e);
    } else {
        res = func_111788(f, a1, *(char **)(ent + 0x14), e);
    }
    if ((res & 0xFF) == 0) {
        return;
    }
    (*(handler_t *)(*(char **)(e + 0x40) + 0x20))(e, 0, 3, obj + 0x30, obj + 0x20, obj, 1.0f);
}
