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

extern Head D_0026B9D0;
extern Entry D_0026B9E0[3];
extern char D_001C7138[];
extern char D_001C7140[];
extern char D_001C7148[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_0F06A8(const char *name);

void func_095DE0(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0026B9E0;
        D_0026B9D0.a = 0;
        D_0026B9D0.b = 0;
        D_0026B9D0.c = 0;
        D_0026B9D0.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0F06A8(D_001C7138);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0F06A8(D_001C7140);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0F06A8(D_001C7148);
        local.kind = 12;
        *entries = local;
    }
}
