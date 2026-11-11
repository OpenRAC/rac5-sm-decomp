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

extern Head D_002A0A80;
extern Entry D_002A0A90[3];
extern char D_00200088[];
extern char D_00200090[];
extern char D_00200098[];
extern void *clear_entry(void *dst, int value, unsigned int size) __asm__("memset");
extern unsigned int func_105A18(const char *name);

void func_0A2690(void *object, int mode) {
    Entry local;

    if (mode == 0xFFFF && object != 0) {
        Entry *entries = D_002A0A90;
        D_002A0A80.a = 0;
        D_002A0A80.b = 0;
        D_002A0A80.c = 0;
        D_002A0A80.d = 1.0f;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_105A18(D_00200088);
        local.kind = 10;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_105A18(D_00200090);
        local.kind = 11;
        *entries++ = local;
        clear_entry(&local, 0, sizeof local);
        local.resource = func_105A18(D_00200098);
        local.kind = 12;
        *entries = local;
    }
}
