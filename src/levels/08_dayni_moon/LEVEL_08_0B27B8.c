typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

typedef struct {
    unsigned int resource;
    int kind;
} Entry;

extern Head D_00302F80;
extern Entry D_00302F90[3];
extern char D_0025AE88[];
extern char D_0025AE90[];
extern char D_0025AE98[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_11FBE8(const char *name);

void func_0B27B8(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_00302F90;
        D_00302F80.a = 0;
        D_00302F80.b = 0;
        D_00302F80.c = 0;
        D_00302F80.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_11FBE8(D_0025AE88);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_11FBE8(D_0025AE90);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_11FBE8(D_0025AE98);
        local.kind = 12;
        *entries = local;
    }
}
