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

extern Head D_00285140;
extern Entry D_00285150[3];
extern char D_001E4388[];
extern char D_001E4390[];
extern char D_001E4398[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_101CB0(const char *name);

void func_09EC30(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_00285150;
        D_00285140.a = 0;
        D_00285140.b = 0;
        D_00285140.c = 0;
        D_00285140.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_101CB0(D_001E4388);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_101CB0(D_001E4390);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_101CB0(D_001E4398);
        local.kind = 12;
        *entries = local;
    }
}
