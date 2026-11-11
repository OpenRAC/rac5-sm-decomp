/* LEVEL_10:0x19B898 -- per-state check that decides whether to trigger a transition. */
struct St {
    char pad[0xC0];
    int fC0;
};
struct Act {
    char pad0[0x45];
    unsigned char state;
    char pad1[0x58 - 0x46];
    struct St *st;
    char pad2[0x64 - 0x5C];
    unsigned int f64;
};
extern int func_19CAD0(struct Act *a);
extern int func_19C618(struct Act *a);
extern int func_07D0E8(struct Act *a, int b);
extern void func_19B4E0(struct Act *a, int b);

void func_19B898(struct Act *a)
{
    struct St *s = a->st;

    switch (a->state) {
    case 1:
        if (a->f64 & 0x200000)
            func_19B4E0(a, 2);
        break;
    case 2:
        if (!func_19CAD0(a))
            func_19C618(a);
        break;
    case 3:
        if (func_19CAD0(a))
            break;
        if (func_19C618(a))
            break;
        if (s->fC0) {
            if (!func_07D0E8(a, 0))
                break;
        }
        func_19B4E0(a, 2);
        break;
    case 4:
        if (func_07D0E8(a, 0))
            func_19B4E0(a, 7);
        break;
    }
}
