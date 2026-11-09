/* LEVEL_15:0x128618 -- copies a 24-byte block from the argument into the object, then calls two helpers. */

typedef struct { unsigned long long v[3]; } __attribute__((packed)) Blk24;

extern void func_080488(char *s, int value);
extern void func_1286D8(char *s, float *a1);
extern void func_0294D8(char *s, int a1, int a2);
extern char D_00170D40[];

void func_128618(char *s, char *src, float *a2, int a3)
{
    func_080488(s, (int)D_00170D40);
    *(Blk24 *)(s + 0xCC) = *(Blk24 *)src;
    func_1286D8(s, a2);
    func_0294D8(s + 0x1C, a3, 0xFFFF);
}
