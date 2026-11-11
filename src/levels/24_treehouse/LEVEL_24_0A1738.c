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

extern Head D_0027FBC0;
extern Entry D_0027FBD0[3];
extern char D_001E1F88[];
extern char D_001E1F90[];
extern char D_001E1F98[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_106488(const char *name);

void func_0A1738(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_0027FBD0;
        D_0027FBC0.a = 0;
        D_0027FBC0.b = 0;
        D_0027FBC0.c = 0;
        D_0027FBC0.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_106488(D_001E1F88);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_106488(D_001E1F90);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_106488(D_001E1F98);
        local.kind = 12;
        *entries = local;
    }
}
