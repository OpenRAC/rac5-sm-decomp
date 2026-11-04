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

extern Head D_002B3D00;
extern Entry D_002B3D10[3];
extern char D_00211208[];
extern char D_00211210[];
extern char D_00211218[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_10F448(const char *name);

void func_0A7EC0(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002B3D10;
        D_002B3D00.a = 0;
        D_002B3D00.b = 0;
        D_002B3D00.c = 0;
        D_002B3D00.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10F448(D_00211208);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10F448(D_00211210);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10F448(D_00211218);
        local.kind = 12;
        *entries = local;
    }
}
