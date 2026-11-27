/* LEVEL_03:0x1CED10 -- releases the object's slot: clears the 0x1C-byte record the state byte (+0x68) selects (decrementing the owner's counter when the record is flagged), runs the type-0x15 teardown with the state's linked word (+0x40), releases the shared 0x68-byte entry handle, runs the final routine and sets the done flag (+0x5C). */
struct P19338;

extern char D_0024A578[];

extern void *memset(void *s, int c, unsigned int n);
extern void func_1D4208(char *object, int value);
extern void func_095488(char *pool, unsigned int index);
extern void func_019338(struct P19338 *p);

static __inline__ void Release(char *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095488(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1CED10(char *object)
{
    char *state;
    char *base;
    char *rec;

    state = *(char **)(object + 0x58);
    base = *(char **)(*(char **)(*(char **)(object + 0x54) + 0x10) + 0x58);
    rec = base + *(unsigned char *)(state + 0x68) * 0x1C;
    if (*(unsigned char *)(rec + 0x18) & 1) {
        *(unsigned char *)(base + 0x158) = *(unsigned char *)(base + 0x158) - 1;
    }
    memset(rec, 0, 0x1C);
    if (*(unsigned char *)(object + 0x45) == 0x15) {
        if (*(int *)(state + 0x40) != 0) {
            func_1D4208(*(char **)(state + 0x40), (int)object);
        }
    }
    Release(D_0024A578 + *(unsigned char *)(state + 3) * 0x68, (unsigned short *)state);
    func_019338((struct P19338 *)object);
    if (*(int *)(object + 0x5C) == 0) {
        *(int *)(object + 0x5C) = 1;
    }
}
