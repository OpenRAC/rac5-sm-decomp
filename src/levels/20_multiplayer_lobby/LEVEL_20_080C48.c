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

extern Head D_0018F090;
extern Entry D_0018F0A0[3];
extern char D_00126FB8[];
extern char D_00126FC0[];
extern char D_00126FC8[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_0CA280(const char *name);

void func_080C48(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0018F0A0;
        D_0018F090.a = 0;
        D_0018F090.b = 0;
        D_0018F090.c = 0;
        D_0018F090.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0CA280(D_00126FB8);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0CA280(D_00126FC0);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0CA280(D_00126FC8);
        local.kind = 12;
        *entries = local;
    }
}
