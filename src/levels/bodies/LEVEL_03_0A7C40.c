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

extern Head D_002CEB80;
extern Entry D_002CEB90[3];
extern char D_0022A108[];
extern char D_0022A110[];
extern char D_0022A118[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_10D110(const char *name);

void func_0A7C40(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002CEB90;
        D_002CEB80.a = 0;
        D_002CEB80.b = 0;
        D_002CEB80.c = 0;
        D_002CEB80.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10D110(D_0022A108);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10D110(D_0022A110);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10D110(D_0022A118);
        local.kind = 12;
        *entries = local;
    }
}
