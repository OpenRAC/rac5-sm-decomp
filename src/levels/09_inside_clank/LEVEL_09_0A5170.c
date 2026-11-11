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

extern Head D_0029B480;
extern Entry D_0029B490[3];
extern char D_001FAE08[];
extern char D_001FAE10[];
extern char D_001FAE18[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_108838(const char *name);

void func_0A5170(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0029B490;
        D_0029B480.a = 0;
        D_0029B480.b = 0;
        D_0029B480.c = 0;
        D_0029B480.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_108838(D_001FAE08);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_108838(D_001FAE10);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_108838(D_001FAE18);
        local.kind = 12;
        *entries = local;
    }
}
