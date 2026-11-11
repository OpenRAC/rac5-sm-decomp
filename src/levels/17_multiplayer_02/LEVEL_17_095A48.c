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

extern Head D_0025CB50;
extern Entry D_0025CB60[3];
extern char D_001B93B8[];
extern char D_001B93C0[];
extern char D_001B93C8[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_0EF670(const char *name);

void func_095A48(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0025CB60;
        D_0025CB50.a = 0;
        D_0025CB50.b = 0;
        D_0025CB50.c = 0;
        D_0025CB50.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EF670(D_001B93B8);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EF670(D_001B93C0);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EF670(D_001B93C8);
        local.kind = 12;
        *entries = local;
    }
}
