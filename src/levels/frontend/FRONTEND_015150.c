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

extern Head D_0012D740;
extern Entry D_0012D750[3];
extern char D_00107EA8[];
extern char D_00107EB0[];
extern char D_00107EB8[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_01C598(const char *name);

void func_015150(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0012D750;
        D_0012D740.a = 0;
        D_0012D740.b = 0;
        D_0012D740.c = 0;
        D_0012D740.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_01C598(D_00107EA8);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_01C598(D_00107EB0);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_01C598(D_00107EB8);
        local.kind = 12;
        *entries = local;
    }
}
