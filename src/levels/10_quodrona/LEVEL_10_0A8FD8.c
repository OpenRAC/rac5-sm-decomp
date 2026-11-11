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

extern Head D_002BD100;
extern Entry D_002BD110[3];
extern char D_0021A188[];
extern char D_0021A190[];
extern char D_0021A198[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_10D660(const char *name);

void func_0A8FD8(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002BD110;
        D_002BD100.a = 0;
        D_002BD100.b = 0;
        D_002BD100.c = 0;
        D_002BD100.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10D660(D_0021A188);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10D660(D_0021A190);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_10D660(D_0021A198);
        local.kind = 12;
        *entries = local;
    }
}
