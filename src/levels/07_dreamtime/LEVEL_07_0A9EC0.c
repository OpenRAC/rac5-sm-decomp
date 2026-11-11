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

extern Head D_002C9600;
extern Entry D_002C9610[3];
extern char D_00225F08[];
extern char D_00225F10[];
extern char D_00225F18[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_112498(const char *name);

void func_0A9EC0(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002C9610;
        D_002C9600.a = 0;
        D_002C9600.b = 0;
        D_002C9600.c = 0;
        D_002C9600.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_112498(D_00225F08);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_112498(D_00225F10);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_112498(D_00225F18);
        local.kind = 12;
        *entries = local;
    }
}
