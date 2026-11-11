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

extern Head D_001CBD40;
extern Entry D_001CBD50[3];
extern char D_00165988[];
extern char D_00165990[];
extern char D_00165998[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_0D4B98(const char *name);

void func_088788(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_001CBD50;
        D_001CBD40.a = 0;
        D_001CBD40.b = 0;
        D_001CBD40.c = 0;
        D_001CBD40.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0D4B98(D_00165988);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0D4B98(D_00165990);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_0D4B98(D_00165998);
        local.kind = 12;
        *entries = local;
    }
}
