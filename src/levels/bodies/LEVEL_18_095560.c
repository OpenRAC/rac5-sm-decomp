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

extern Head D_0026BBD0;
extern Entry D_0026BBE0[3];
extern char D_001C74B8[];
extern char D_001C74C0[];
extern char D_001C74C8[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_0EE898(const char *name);

void func_095560(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0026BBE0;
        D_0026BBD0.a = 0;
        D_0026BBD0.b = 0;
        D_0026BBD0.c = 0;
        D_0026BBD0.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EE898(D_001C74B8);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EE898(D_001C74C0);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0EE898(D_001C74C8);
        local.kind = 12;
        *entries = local;
    }
}
