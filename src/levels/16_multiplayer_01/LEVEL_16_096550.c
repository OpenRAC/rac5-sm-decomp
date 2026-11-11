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

extern Head D_0026B850;
extern Entry D_0026B860[3];
extern char D_001C5F38[];
extern char D_001C5F40[];
extern char D_001C5F48[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_0F0060(const char *name);

void func_096550(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0026B860;
        D_0026B850.a = 0;
        D_0026B850.b = 0;
        D_0026B850.c = 0;
        D_0026B850.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0F0060(D_001C5F38);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0F0060(D_001C5F40);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0F0060(D_001C5F48);
        local.kind = 12;
        *entries = local;
    }
}
