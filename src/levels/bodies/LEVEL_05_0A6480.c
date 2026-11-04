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

extern Head D_0029FBC0;
extern Entry D_0029FBD0[3];
extern char D_00200108[];
extern char D_00200110[];
extern char D_00200118[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_10B888(const char *name);

void func_0A6480(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0029FBD0;
        D_0029FBC0.a = 0;
        D_0029FBC0.b = 0;
        D_0029FBC0.c = 0;
        D_0029FBC0.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10B888(D_00200108);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10B888(D_00200110);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10B888(D_00200118);
        local.kind = 12;
        *entries = local;
    }
}
