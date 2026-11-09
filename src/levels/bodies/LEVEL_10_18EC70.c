/* LEVEL_10:0x18EC70 -- queries nearby actors, calls each one's hook, then probes once more unless the state byte is 5. */
typedef void (*Hook)(float f, char *self, int a, int b, float *buf, char *g, char *obj);

extern char D_0022C6D8[];
extern char D_00220E18[];
extern void func_123D68(float *buf, char *obj, char *g);
extern unsigned int func_01BA68(float f, char **out, int max, float *buf, int a, int b, int c, int d);
extern int func_01EFD0(float f, float *va, float *vb, float *buf, int a, int b);

int func_18EC70(char *obj)
{
    float buf[4];
    char *ents[4];
    float va[4];
    float vb[4];
    unsigned int count;
    unsigned int i;
    int found;
    Hook fn;

    found = 0;
    func_123D68(buf, obj, D_0022C6D8);
    buf[3] = 1.0f;
    count = func_01BA68(3.0f, ents, 4, buf, 0x129, 0x101, 0xAE3E, 1);
    for (i = 0; i < count; i++) {
        fn = *(Hook *)(*(char **)(ents[i] + 0x40) + 0x20);
        if (fn != 0) {
            fn(50.0f, ents[i], 0, 3, buf, D_00220E18, obj);
        }
        found = 1;
    }
    if (*(unsigned char *)(obj + 0x45) != 5) {
        return func_01EFD0(1.5f, va, vb, buf, 0x129, 0x101) ? 1 : found;
    }
    return found;
}
