/* LEVEL_19:0x15B498 -- dispatches on a mode byte, runs an optional check, then calls a float-argument helper. */
extern int func_15C010(char *object);
extern void func_15B170(char *o, int a, int b);
extern void func_15BB18(char *o);
extern void func_15B540(char *o, float f);

void func_15B498(char *o, float f)
{
    unsigned char mode;
    char **p;
    char *q;

    mode = *(unsigned char *)(o + 0x45);
    p = *(char ***)(o + 0x54);
    q = *(char **)(o + 0x58);
    switch (mode) {
    case 1:
        if (*p != 0 && func_15C010(*p)) {
            func_15B170(o, 2, 0);
        }
        break;
    case 6:
        if (*(int *)(q + 0x98) == 0) {
            func_15BB18(o);
        }
        break;
    }
    func_15B540(o, f);
}
