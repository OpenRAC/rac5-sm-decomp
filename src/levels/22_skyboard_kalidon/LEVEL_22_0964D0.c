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

extern Head D_002098C0;
extern Entry D_002098D0[3];
extern char D_0016E688[];
extern char D_0016E690[];
extern char D_0016E698[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_0EB1F0(const char *name);

void func_0964D0(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002098D0;
        D_002098C0.a = 0;
        D_002098C0.b = 0;
        D_002098C0.c = 0;
        D_002098C0.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EB1F0(D_0016E688);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EB1F0(D_0016E690);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EB1F0(D_0016E698);
        local.kind = 12;
        *entries = local;
    }
}
