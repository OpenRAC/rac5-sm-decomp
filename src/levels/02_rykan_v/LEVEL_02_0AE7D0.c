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

extern Head D_002CB200;
extern Entry D_002CB210[3];
extern char D_00226188[];
extern char D_00226190[];
extern char D_00226198[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_115790(const char *name);

void func_0AE7D0(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002CB210;
        D_002CB200.a = 0;
        D_002CB200.b = 0;
        D_002CB200.c = 0;
        D_002CB200.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_115790(D_00226188);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_115790(D_00226190);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_115790(D_00226198);
        local.kind = 12;
        *entries = local;
    }
}
