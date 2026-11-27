/* LEVEL_01:0x15A6C0 -- copies a 4-byte table entry and dispatches two helpers. */

struct Entry4 {
    char b[4];
};

extern char D_0021EA38[];
extern char D_0021E998[];

void *memcpy(void *dst, const void *src, unsigned int n);
int func_031268(void *a0, void *a1, void *a2, unsigned int a3, int a4, struct Entry4 a5, int a6);
int func_15C960(void *a0);
void func_15C260(void *a0, int a1, int a2);

void func_15A6C0(char *a0)
{
    struct Entry4 tmp;
    char *p;

    p = *(char **)(a0 + 0x54);
    memcpy(&tmp, D_0021EA38, 4);
    if (func_031268(p, a0, D_0021E998, *(unsigned int *)(p + 0x3C),
                    *(int *)(a0 + 0x58) + 0x81, tmp, 0x40) != 0) {
        unsigned char b;
        b = (unsigned char)func_15C960(a0);
        func_15C260(a0, *(unsigned char *)(a0 + 0x45), b);
    }
}
