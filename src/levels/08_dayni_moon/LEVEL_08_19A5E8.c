/* LEVEL_08:0x19A5E8 -- clears the object's 0x80-byte state block, resolves the object's reference (+0x54) against the global table and, when it resolves to a live entry, hooks the object to it (registration call, slot counter at +0x4A copied into the state, float 20.0, byte 3), installs the handler pointer, updates the flag word at +0x78 and returns 1; otherwise returns 0. */
struct Obj07CC28;

extern char *D_0024FC54;
extern char D_0026D9D0[];

extern void *memset(void *s, int c, unsigned int n);
extern void func_1F9D08(int ref, char *object, char *hook, int a3);
extern float func_084B98(struct Obj07CC28 *o, unsigned int idx);
extern void func_19B398(void);

static __inline__ int Resolve(int *slot)
{
    char *entry;

    if (*slot == 0) {
        return 0;
    }
    entry = D_0024FC54 + *slot;
    if (*(int *)(entry + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)entry;
    return 1;
}

int func_19A5E8(char *object)
{
    char *state;
    int *ref;
    char *target;
    int count;
    int ok;

    state = *(char **)(object + 0x58);
    memset(state, 0, 0x80);
    ref = *(int **)(object + 0x54);
    if (!Resolve(ref)) {
        return 0;
    }
    func_1F9D08(*ref, object, D_0026D9D0, 0);
    target = *(char **)(*ref + 0x58);
    count = *(unsigned char *)(target + 0x4A);
    *(unsigned char *)(target + 0x4A) = count + 1;
    *(unsigned char *)(state + 0x7D) = count;
    *(float *)(state + 0x64) = 20.0f;
    *(unsigned char *)(state + 0x7F) = 3;
    func_084B98((struct Obj07CC28 *)object, 3);
    *(void (**)(void))(*(char **)(object + 0x48) + 0xDC) = func_19B398;
    *(unsigned int *)(object + 0x78) = (*(unsigned int *)(object + 0x78) & 0xFFF0FFFFU) | 0x20000;
    *(unsigned char *)(state + 0x7E) = 0;
    return 1;
}
