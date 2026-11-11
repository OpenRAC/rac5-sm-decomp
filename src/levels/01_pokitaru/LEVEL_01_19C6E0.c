/* LEVEL_01:0x19C6E0 -- calls a test helper and, when it passes, a follow-up helper. */
extern char D_00235140[];
extern int func_19B9C8(void *, void *);
extern void func_19BFF0(void *, void *);

int func_19C6E0(void *record)
{
    if (func_19B9C8(record, D_00235140) != 0) {
        func_19BFF0(record, D_00235140);
        return 1;
    }
    return 0;
}
