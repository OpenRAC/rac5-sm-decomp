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

extern Head D_002CE500;
extern Entry D_002CE510[3];
extern char D_0022AB88[];
extern char D_0022AB90[];
extern char D_0022AB98[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_11A9B0(const char *name);

void func_0AD0D0(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002CE510;
        D_002CE500.a = 0;
        D_002CE500.b = 0;
        D_002CE500.c = 0;
        D_002CE500.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_11A9B0(D_0022AB88);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_11A9B0(D_0022AB90);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_11A9B0(D_0022AB98);
        local.kind = 12;
        *entries = local;
    }
}
